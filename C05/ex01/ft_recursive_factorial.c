/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:42:37 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/02 15:57:09 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nbr)
{
	if (nbr == 1)
		return (1);
	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (1);
	return (nbr * ft_recursive_factorial(nbr -1));
}
