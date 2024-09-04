/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:08:28 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/03 14:28:09 by kcsajka          ###   ########.fr       */
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
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;
	char	*res;

	while (i < size)
		total_length += ft_strlen(strs[i]);
	total_length += ft_strlen(sep) * (size -2);
	res = (char *)malloc(total_length);
	printf("%d\n", total_length);
	return (res);
}
