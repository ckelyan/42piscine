/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:25:27 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/10 18:05:09 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	res = (int *)malloc((length) * sizeof(int));
	i = -1;
	while (++i < length)
		res[i] = (*f)(tab[i]);
	return (res);
}
