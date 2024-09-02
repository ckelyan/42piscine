/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:05:20 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/02 16:17:17 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (max <= min)
		return (0);
	res = (int *)malloc(4 * (max - min));
	i = 0;
	while (min < max)
		res[i++] = min++;
	return (res);
}
