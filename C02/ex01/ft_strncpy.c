/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:26:40 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/22 18:51:35 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) {
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
