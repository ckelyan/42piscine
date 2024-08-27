/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:12:41 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/27 16:34:35 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int ft_is_printable(char c)
{
	return (32 <= c && c <= 126);
}
void	ft_puthex_addr_helper(int i, int depth, int pad, char const *table)
{
	while (i == 0 && depth++ < pad)
		ft_putchar(table[0]);

	if (i == 0 && depth > 0)
		return;

	ft_puthex_addr_helper(i / 16, ++depth, pad, table);
	ft_putchar(table[i % 16]);
}

void	ft_put_hex(int v, int pad)
{
	char const *table;

	table = "0123456789abcdef";
	ft_puthex_addr_helper(v, 0, pad, table);
}

int ft_get_int_from_ptr(char *ptr)
{
	return *(char *)ptr;
}

void ft_print_addr_value(void *addr, unsigned int size)
{
	unsigned int	i;
	char value;

	i = 0;
	while (i < size)
	{
		value = ft_get_int_from_ptr(addr + i);
		if (ft_is_printable(value))
			ft_putchar(value);
		else
			ft_putchar('.');
		i++;
	}
}


void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int col;
	
	i = 0;
	col = 16;
	while (i < size + size % 16)
	{
		if (col == 16)
		{
			if (i > 1)
			{
				ft_print_addr_value(addr, 16);
				ft_putchar('\n');
				addr+= 16;
			}
			ft_put_hex((int)addr, 16);
			ft_putstr(": ");
			col = 0;
			continue ;
		}
		if (col < 16)
		{
			if (i < size)
				ft_put_hex(ft_get_int_from_ptr(addr + col), 2);
			else
				ft_putstr("  ");
			if (i % 2 == 1)
				ft_putchar(' ');
			col += 1;
			i += 1;
		}
	}

	return (addr);
}
