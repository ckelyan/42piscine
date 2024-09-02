/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:17:18 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 22:21:12 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	i;

	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);
	i = n;
	while (--i > 1)
		if (n % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int n)
{
	int	i;

	if (n < 0)
		return (2);
	i = n;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
