/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:50:30 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/30 11:30:05 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	size;

	if (n == 0)
		return (0);
	i = 0;
	while (dest[i] && i < n)
		i++;
	size = i;
	while (src[size - i])
		size++;
	while (*src && i < n - 1)
		dest[i++] = *src++;
	if (n > i)
		dest[i] = '\0';
	return (size);
}
