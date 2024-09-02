/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:24:37 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 18:33:19 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nbr)
{
	int	i;
	int	res;

	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (1);
	if (nbr < 3)
		return (nbr);
	i = -1;
	res = 1;
	while (++i < nbr)
		res *= i + 1;
	return (res);
}
