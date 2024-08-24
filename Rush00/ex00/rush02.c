/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:09:27 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/24 18:12:05 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_col(char *cur, int c, int max)
{
	if (c == 0)
		ft_putchar(*cur);
	else if (c == max-1)
		ft_putchar(*(cur +2));
	else
		ft_putchar(*(cur +1));
}

void	rush(int x, int y)
{
	char const	*cur;
	int	row;
	int	col;

	if (x < 1 || y < 1)
		write(2, "ERROR: invalid arguments, expected x > 0 and y > 0\n", 52);

	cur = "ABAB BCBC";
	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			print_col(cur, row, x);
			row++;
		}
		if (col == 0 || col == y-2)
			cur += 3 * (1 + (y == 2));
		ft_putchar('\n');
		col++;
	}
}
