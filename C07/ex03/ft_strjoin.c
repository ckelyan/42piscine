/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:08:28 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/05 12:10:16 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *d, char *s)
{
	while (*s)
		*d++ = *s++;
	return (d);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*res;

	if (size == 0)
	{
		res = (char *)malloc(1);
		*res = '\0';
		return (res);
	}
	total_length = 0;
	i = -1;
	while (++i < size)
		total_length += ft_strlen(strs[i]);
	total_length += ft_strlen(sep) * (size -1);
	res = (char *)malloc(total_length +1);
	i = -1;
	while (++i < size)
	{
		res = ft_strcpy(res, strs[i]);
		if (i < size - 1)
			res = ft_strcpy(res, sep);
	}
	*res = '\0';
	return (res - total_length);
}
