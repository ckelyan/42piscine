/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:20:30 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/08 20:32:19 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bible.h"

void	free_all_tab_i(char **tab, int i)
{
	int	d;

	d = 0;
	while (d != i)
	{
		free(tab[d]);
		tab[d] = NULL;
		d++;
	}
	free(tab);
	tab = NULL;
}

void	free_all_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab == NULL)
		return ;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	tab = NULL;
}
