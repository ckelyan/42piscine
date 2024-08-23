/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: kcsajka <marvin@42lausanne.ch>			 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/08/22 11:12:31 by kcsajka		   #+#	#+#			 */
/*   Updated: 2024/08/22 12:25:17 by kcsajka          ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else if ('0' <= c && c <= '9')
		return (2);
	return (0);
}

// finds the index of the last character in a word
int	get_last_char_index(char *str, int idx)
{
	if (is_alphanumeric(str[idx + 1]) == 0)
		return (idx);
	while (is_alphanumeric(str[idx]) > 0)
		idx++;
	return (idx);
}

// make all uppercase lowercase
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	an_value;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		an_value = is_alphanumeric(str[i]);
		if (!an_value)
		{
			i++;
			continue ;
		}
		if (an_value == 1)
		{
			str[i] += 'A' - 'a';
		}
		i += get_last_char_index(str, i) - i + 1;
	}
	return (str);
}
