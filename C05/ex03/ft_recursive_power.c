/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:03:29 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/02 16:02:37 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int n, int pow)
{
	if (pow < 0 || n == 0)
		return (0);
	if (pow < 2 || n == 1)
		return (1);
	return (n * ft_recursive_power(n, pow - 1));
}
