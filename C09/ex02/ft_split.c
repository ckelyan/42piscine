/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:25:13 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/12 12:08:20 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	if (!c)
		return (1);
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	ft_strcpy_til_sep(char **dest, char *str, char *charset)
{
	int		i;
	int		size;

	size = 0;
	while (!is_sep(str[size], charset))
		size++;
	if (size == 0)
		return (0);
	*dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (-1);
	i = 0;
	while (str[i] && i < size)
	{
		(*dest)[i] = str[i];
		i++;
	}
	(*dest)[i] = '\0';
	return (i);
}

int	ft_count_strings(char *str, char *charset)
{
	int	i;
	int	c;
	int	block;

	i = -1;
	c = 0;
	block = 0;
	while (str[++i])
	{
		if (is_sep(str[i], charset))
		{
			block = 0;
			continue ;
		}
		if (!is_sep(str[i], charset) && !block)
		{
			c++;
			block = 1;
		}
	}
	return (c);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size;
	int		arri;
	char	**res;

	res = malloc(sizeof(char *) * (1 + ft_count_strings(str, charset)));
	if (!res)
		return (NULL);
	arri = 0;
	i = -1;
	while (str[++i])
	{
		if (is_sep(str[i], charset))
			continue ;
		size = ft_strcpy_til_sep(&res[arri], &str[i], charset);
		if (size == 0)
			continue ;
		if (size == -1)
			return (NULL);
		arri++;
		i += size;
	}
	res[arri] = 0;
	return (res);
}
