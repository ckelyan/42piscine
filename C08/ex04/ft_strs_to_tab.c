/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:46:32 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/11 00:52:32 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	free_upto(t_stock_str *arr, int size)
{
	int	i;

	i = -1;
	while (i < size && arr[i].copy)
		free(arr[i].copy);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	i = -1;
	dest = (char *)malloc(ft_strlen(str) + 1);
	if (!dest)
		return (0);
	while (str[++i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	if (ac < 1 || !*av)
		return (0);
	res = (t_stock_str *)
		malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	i = -1;
	while (++i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		if (!res[i].copy)
		{
			free_upto(res, i);
			free(res);
			return (0);
		}
	}
	res[i].str = 0;
	return (res);
}
