/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:54:21 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 19:02:14 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int n, int pow)
{
	int	i;
	int	res;

	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	res = n;
	i = -1;
	while (++i < pow -1)
		res *= n;
	return (res);
}
