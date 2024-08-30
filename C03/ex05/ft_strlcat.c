/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:50:30 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/30 10:05:42 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (n == 0)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j++] && i++ < n - 1)
		dest[i] = src[i + j];
	if (!dest[i])
		dest[i] = '\0';
	return dest;
}
