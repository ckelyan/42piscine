/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:25:13 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/11 18:30:23 by kcsajka          ###   ########.fr       */
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

char	*ft_strdup(char *str, int size)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] && i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
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
	arri = 0;
	i = -1;
	while (str[++i])
	{
		if (is_sep(str[i], charset))
			continue ;
		size = 0;
		while (!is_sep(str[i + size], charset))
			size++;
		if (size == 0)
			continue ;
		res[arri] = ft_strdup(&str[i], size);
		if (!res[arri])
			return (NULL);
		arri++;
		i += size;
	}
	res[arri] = 0;
	return (res);
}
