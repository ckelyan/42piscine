/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atexier <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:16:18 by atexier           #+#    #+#             */
/*   Updated: 2024/08/25 17:59:20 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR: invalid arguments, expected x > 0 and y > 0\n", 51);
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{	
	int	row;
	int	col;

	row = 1;
	if (ft_error(x, y))
		return ;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == 1 && col == x))
				ft_putchar('A');
			else if ((row == y && col == 1) || (row == y && col == x))
				ft_putchar('C');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
