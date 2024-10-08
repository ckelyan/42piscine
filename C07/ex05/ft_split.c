/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:25:13 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/06 19:52:54 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
		if (!c || c == *charset++)
			return (1);
	return (0);
}

int	ft_strncpy(char *dest, char *str, int n)
{
	int	i;

	i = -1;
	while (++i < n && str[i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (i);
}

int	count_strings(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
		if (!is_sep(*str++, charset) && is_sep(*str, charset))
			count++;
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		scount;
	int		i;
	int		arri;
	int		size;

	scount = count_strings(str, charset);
	i = -1;
	arri = 0;
	res = (char **)malloc(sizeof(char *) * (scount + 1));
	while (str[++i] && arri < scount)
	{
		if (is_sep(str[i], charset))
			continue ;
		size = 0;
		while (!is_sep(str[i + size], charset))
			size++;
		res[arri] = (char *)malloc(size + 1);
		ft_strncpy(res[arri], &str[i], size);
		arri++;
		i += size;
	}
	res[arri] = 0;
	return (res);
}
