/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:22:24 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/04 16:18:10 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n < 3)
		return (1);
	return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}
