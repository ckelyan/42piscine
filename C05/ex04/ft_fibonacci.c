/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:22:24 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 19:33:20 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci_helper(int n)
{
	if (n == 0)
		return (0);
	if (n < 3)
		return (1);
	return (ft_fibonacci_helper(n -1) + ft_fibonacci_helper(n -2));
}

int	ft_fibonacci(int n)
{
	if (n < 0)
		return (-1);
	return (ft_fibonacci_helper(n));
}
