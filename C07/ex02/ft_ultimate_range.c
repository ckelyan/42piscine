/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:51:22 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/02 17:08:48 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max <= min)
	{
		range = (void *)0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
