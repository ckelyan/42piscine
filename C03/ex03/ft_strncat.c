/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:43:38 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/29 13:57:00 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (n == 0)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src && j++ < n)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
