/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:03:31 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/02 18:01:58 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_helper(int i)
{
	if (i < 10)
	{
		ft_putchar(i + '0');
		return ;
	}
	ft_putnbr_helper(i / 10);
	ft_putchar(i % 10 + '0');
}

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		ft_putchar('-');
		if (i == INT_MIN)
		{
			ft_putchar('2');
			i += 2e9;
		}
		i = -i;
	}

	ft_putnbr_helper(i);
}
