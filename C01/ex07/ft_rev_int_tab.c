/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:09:52 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/21 14:10:53 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_at_index(int *arr, int size, int idx)
{
	int	temp;

	temp = arr[idx];
	arr[idx] = arr[size - 1 - idx];
	arr[size - 1 - idx] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swap_at_index(tab, size, i);
		i++;
	}
}
