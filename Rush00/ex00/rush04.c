/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:22:50 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/08/25 18:00:01 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	is_top_left_or_bottom_right_corner(int column, int row, int x, int y)
{
	return ((column == 0 && row == 0) || \
			(column == x - 1 && column > 0 && row == y - 1 && row > 0));
}

int	is_top_right_or_left_bottom(int column, int row, int x, int y)
{
	return ((column == x - 1 && row == 0) || (column == 0 && row == y - 1));
}

int	is_border(int column, int row, int x, int y)
{
	return (column == 0 || column == x - 1 || row == 0 || row == y - 1);
}

int	ft_error_value(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "ERROR invalide value x or y \"x && y > 0\"\n", 41);
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 0;
	if (ft_error_value(x, y))
		return ;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if (is_top_left_or_bottom_right_corner(column, row, x, y))
				ft_putchar('A');
			else if (is_top_right_or_left_bottom(column, row, x, y))
				ft_putchar('C');
			else if (is_border(column, row, x, y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
