/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:57:44 by madelmen          #+#    #+#             */
/*   Updated: 2024/08/24 18:11:44 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	is_top_left_or_bottom_right_corner(int column, int row, int x, int y)
{
	return ((column == 0 && row == 0) || \
			(column == x - 1 && row == y - 1 && column > 0 && row > 0));
}

int is_right_corner(int column, int row, int x, int y)
{
	return (column == x-1) && (row == 0 || row == y -1);
}

int is_left_corner(int column, int row, int x, int y)
{
	return (column == 0) && (row == 0 || row == y -1);
}

int is_bottom(int row, int y)
{
	return (row == y -1);
}

int is_top(int row, int y)
{
	return (row == 0);
}

int	is_top_right_or_bottom_left_corner(int column, int row, int x, int y)
{
	// is border
	// is top and right
	// is bottom and left
	is_border(row, column, y, x) && (col
	return ((column == 0 && row == y - 1) || (column == x - 1 && row == 0));
}

int	is_border(int row, int column, int y, int x)
{
	return (row == 0 || column == 0 || row == y - 1 || column == x - 1);
}

void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if (is_top(column, y) && (is_right_corner))
			} else if (is_bottom(column, y))
			{

			} else if (is_border(row, column, y, x))
			{
				
			}

			else
				ft_putchar(' ')

			if (is_top_left_or_bottom_right_corner(column, row, x, y))
				ft_putchar('/');
			else if (is_top_right_or_bottom_left_corner(column, row, x, y))
				ft_putchar('\\');
			else if (is_border(row, column, y, x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
