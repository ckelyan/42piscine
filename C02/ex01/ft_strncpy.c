/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:26:40 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/30 11:24:55 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				reached_term;

	i = 0;
	reached_term = 0;
	while (i < n)
	{
		if (reached_term || src[i] == '\0')
		{
			dest[i] = '\0';
			reached_term = 1;
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
