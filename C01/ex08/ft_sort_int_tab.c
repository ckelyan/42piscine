/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:12:35 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/21 14:48:26 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_swap(int *p1, int *p2)
{
	int	temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	bool	swapped;
	int		i;

	swapped = false;
	i = 0;
	while (1)
	{
		if (i >= size - 1)
		{
			if (swapped == false)
				break ;
			swapped = false;
			i = 0;
		}
		if (tab[i] > tab[i +1])
		{
			swapped = true;
			ft_swap(&tab[i], &tab[i +1]);
		}
		i++;
	}
}
