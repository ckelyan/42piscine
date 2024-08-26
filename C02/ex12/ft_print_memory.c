/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:12:41 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/26 16:29:12 by kcsajka          ###   ########.fr       */
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

int ft_pow(int base, int exp)
{
	int res;

	res = 1;
	while (exp-- > 0)
		res *= base;
	return (res);
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

void	ft_put_hex_addr(void *addr)
{
	char const *table;

	table = "0123456789abcdef";
	ft_puthex_addr_helper((int)addr, 0, 16, table);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int row;

	i = 0;
	row = 0;
	while (i < size)
	{
		if (row == 0)
		{
			ft_put_hex_addr(addr);
		}

		addr++;
		i++;
	}

	return (addr);
}
