/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:54:52 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/08/25 17:58:45 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	is_corner(int column, int row, int x, int y)
{
	return ((column == 0 || column == x - 1) && (row == 0 || row == y - 1));
}

int	is_vertical_border(int column, int x)
{
	return (column == 0 || column == x - 1);
}

int	is_horizontal_border(int row, int y)
{
	return (row == 0 || row == y - 1);
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
			if (is_corner(column, row, x, y))
				ft_putchar('o');
			else if (is_vertical_border(column, x))
				ft_putchar('|');
			else if (is_horizontal_border(row, y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
