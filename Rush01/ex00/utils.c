/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:55:15 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 14:05:22 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	fputchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *s)
{
	while (*s)
		fputchar(*s++);
}
// char digit to int
int	dtoi(char c)
{
	if ('0' <= c && c <= '9')
		return (c - '0');
	return (-1);
}
// int digit to char
char	itod(int i)
{
	if (i < 10)
		return (i + '0');
	return '!';
}

void	putd(int d)
{
	fputchar(itod(d));
}
#include <stdio.h>
void	putd_arr(int *arr, size_t size)
{
	size_t i = 0;

	i = 0;
	while (i < size -1)
		printf("%d, ", arr[i++]);
	printf("%d\n", arr[i]);
	fflush(stdout);
}

void	display_grid(int **grid, size_t size, int *labels)
{
	size_t	row;
	size_t	col;

	row = 0;
	col = 0;
	putstr("  ");
	while (col < size)
	{
		putd(labels[col]);
		fputchar(' ');
		col++;
	}
	fputchar('\n');
	col = 0;
	while (row < size)
	{
		col = 0;
		putd(labels[size * 2 + row]); // labels
		fputchar(' ');
		while (col < size)
		{
			putd(grid[row][col]);
			fputchar(' ');
			col++;
		}
		putd(labels[size * 3 + row]); // labels
		fputchar('\n');
		row++;
	}
	putstr("  ");
	col = 0;
	while (col < size)
	{
		putd(labels[col + size]); // labels
		fputchar(' ');
		col++;
	}
	fputchar('\n');
}

void	swap_int_ptrs(int *ptr1, int *ptr2)
{
	int const temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int	*rev_int_arr(int *arr, size_t size)
{
	int	i;

	i = -1;
	while ((size_t)++i < size / 2)
		swap_int_ptrs(&arr[i], &arr[size - i - 1]);
	return (arr);
}

int	*get_axis_values(int *dest, int **values, int clue_index, size_t size)
{
	size_t	i;
	size_t	xinc;
	size_t	yinc;
	size_t	xidx;
	size_t	yidx;

	i = 0;
	xinc = 0;
	yinc = 0;
	xidx = 0;
	yidx = 0;
	if(clue_index < size * 2)
	{
		xidx = (clue_index - size * 2) % size;
		yinc = 1;
	} else
	{
		yidx = (clue_index - size * 2) % size;
		xinc = 1;
	}
	while (i < size)
	{
		dest[i++] = values[yidx][xidx];
		xidx+= xinc;
		yidx+= yinc;
	}
	if (clue_index % (size * 2) >= size)
		rev_int_arr(dest, size);
	return (dest);
}

int	*is_int_in_arr(int *arr, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == value)
			return &arr[i];
		i++;
	}
	return (0);
}

int	validate_axis(int *axis_values, size_t size)
{
	int	i;
	int	*expect;
	int *found;

	i = -1;
	expect = (int *)malloc(size * 4);
	while (++i < size)
		expect[i] = i + 1;
	i = -1;
	while (++i < size)
	{
		putd(axis_values[i]);
		fputchar('\n');
		putd_arr(expect, size);
		found = is_int_in_arr(expect, axis_values[i], size);
		if (!found)
		{
			free(expect);
			return (0);
		}
		*found = -1;
	}
	free(expect);
	return (1);
}

int	count_visible_boxes(int **values, int clue_index, size_t size)
{
	int		*axis_values;
	size_t	i;
	int		seen;
	int		biggest;

	seen = 0;
	biggest = 0;
	i = -1;
	axis_values = (int *)malloc(size * 4);
	get_axis_values(axis_values, values, clue_index, size);
	i = -1;
	while (++i < size)
	{
		if (axis_values[i] < biggest)
			continue ;
		biggest = axis_values[i];
		if (axis_values[i])
			seen++;
	}
	free(axis_values);
	return (seen);
}

int	assert_and_log(int cond, char *msg)
{
	if (cond)
		putstr(msg);
	return (cond);
}
