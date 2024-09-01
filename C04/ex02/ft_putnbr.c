/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:03:31 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 17:48:41 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_helper(int i)
{
	if (i < 10)
	{
		putchar(i + '0');
		return ;
	}
	ft_putnbr_helper(i / 10);
	putchar(i % 10 + '0');
}

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		putchar('-');
		i *= -1;
	}
	ft_putnbr_helper(i);
}
