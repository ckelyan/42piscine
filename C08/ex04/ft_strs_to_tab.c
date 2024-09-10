/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:46:32 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/09 16:27:07 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_strcpy(char *dest, char *str)
{
	while (*str)
		*dest++ = *str++;
	*dest = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	if (ac < 1)
		return (0);
	res = (struct s_stock_str *)
		malloc(sizeof(struct s_stock_str) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = (char *)malloc(res[i].size + 1);
		ft_strcpy(res[i].copy, res[i].str);
	}
	res[i].str = 0;
	return (res);
}
