/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:43:42 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/12 18:03:27 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putascii(char *str, int size)
{
	int	i;

	i = -1;
	ft_putchar('|');
	while (++i < size)
	{
		if (str[i] < 32 || str[i] > 126)
			ft_putchar('.');
		else
			ft_putchar(str[i]);
	}
	ft_putchar('|');
}

void	ft_error(char *str)
{
	while (*str)
		write(2, str++, 1);
	write(1, "\n", 1);
}

char	ft_hexval(int i)
{
	if (i > 15 || i < 0)
		return (0);
	if (i < 10)
		return (i + '0');
	return (i - 10 + 'a');
}
#include <stdio.h>
void	ft_puthex(int i, int pos, int pad)
{
	if (i < 16)
	{
		while (++pos < pad)
			ft_putchar(ft_hexval(0));
		ft_putchar(ft_hexval(i));
		return ;
	}
	ft_puthex(i / 16, pos + 1, pad);
	ft_putchar(ft_hexval(i % 16));
}

void	ft_hexdump_line(char *bytes, int pos, int size, int showascii)
{
	int	i;
	int	endi;

	if (showascii)
	{
		ft_puthex(pos, 0, 8);
		ft_putchar(' ');
	} else
		ft_puthex(pos, 0, 7);
	ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		ft_puthex((int)bytes[i], 0, 2);
		ft_putchar(' ');
		if (i == 7)
			ft_putchar(' ');
	}
	endi = i;
	i--;
	while (++i < 16)
		ft_putstr("   ");
	if (showascii)
	{
		ft_putchar(' ');
		ft_putascii(bytes, endi);
	}
	ft_putchar('\n');
}

void	ft_hexdump(int fh, int showascii)
{
	char	buffer[16];
	int		buffer_size;
	int		total_size;

	buffer_size = 1;
	total_size = 0;
	while (buffer_size)
	{
		buffer_size = read(fh, buffer, 16);
		if (buffer_size)
			ft_hexdump_line(buffer, total_size, buffer_size, showascii);
		total_size += buffer_size;
	}
	ft_puthex(total_size, 0, 7);
	ft_putchar('\n');
}
