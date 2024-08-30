/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:19:24 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/30 11:26:02 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	return (32 <= c && c <= 127);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putint_hex_helper(int i, int depth, char const *table)
{
	if (i == 0 && depth > 0)
		return ;
	depth++;
	putint_hex_helper(i / 16, depth, table);
	ft_putchar(table[i % 16]);
}

void	putint_hex(int i)
{
	char const	*table;

	table = "0123456789abcdef";
	ft_putchar('\\');
	if (i < 16)
		ft_putchar('0');
	putint_hex_helper(i, 0, table);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			ft_putchar(str[i]);
		else
			putint_hex(str[i]);
		i++;
	}
}
