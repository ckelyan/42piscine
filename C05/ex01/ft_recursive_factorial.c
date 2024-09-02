/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:42:37 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 19:18:16 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_helper(int n)
{
	if (n <= 1)
		return (1);
	return (n * ft_recursive_factorial_helper(n -1));
}

int	ft_recursive_factorial(int nbr)
{
	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (1);
	return (ft_recursive_factorial_helper(nbr));
}
