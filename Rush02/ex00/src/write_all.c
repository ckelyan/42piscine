/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:41:12 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/08 20:59:18 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bible.h"

void	write_number(t_value *dict, char *tab, int power)
{
	if (!tab)
		return ;
	print_first_number(dict, tab);
	if (power && !(tab[0] == '0' && tab[1] == '0' && tab[2] == '0'))
	{
		ft_putstr(find_by_power(dict, power * 3)->rvalue);
		ft_putstr(" ");
	}
}

void	write_all(t_value *dict, char *value)
{
	char	**tab;
	char	power;

	power = ft_strlen(value) / 3 + (ft_strlen(value) % 3 != 0) - 1;
	tab = malloc_all(value);
	fill_tab(tab, value);
	if (tab[1] == NULL
		&& (tab[0][0] == '0' && tab[0][1] == '0' && tab[0][2] == '0'))
		ft_putstr("zero");
	while (*tab != NULL)
		write_number(dict, *tab++, power--);
	ft_putstr("\n");
	free_all_tab(tab);
}
