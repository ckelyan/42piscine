/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:25:13 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/06 15:23:43 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

char	*ft_strncpy(char *dest, char *str, int n)
{
	int	i;

	i = 0;
	while (i < n && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		scount;
	int		ccount;
	int		i;
	int		size;

	count = 1;
	i = -1;
	while (str[++i])
	{
		if (is_sep(str[i], charset) && (str[i +1] && !is_sep(str[i +1], charset)))
			scount++;
	}
	i = 0;
	res = (char **)malloc(sizeof(char *) * count + 1);
	while (str[i] && i < scount)
	{
		size = 1;
		while (str[size] && !is_sep(str[size], charset))
			size++;
		if (size > 1)
		{
			res[i] = (char *)malloc(size + 1);
			ft_strncpy(res[i], str, size + 1);
			i++;
		}
		while (str[size] && is_sep(str[size], charset))
			size++;
		printf("%s -> ", str);
		str += size;
		printf("%s\n", str);
	}
	res[scount][0] = 0;
	//printf("%d\n", count);
	return (res);
}
