/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:17:35 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/07 18:31:33 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int		ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src, int size)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (*src)
		res[i++] = *src++;
	res[i] = '\0';
	return (res);
}
#endif
