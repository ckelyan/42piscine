/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:08:45 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/25 17:56:33 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	strtoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_numeric(str[i]))
		{
			write(1, "ERROR: \"", 8);
			ft_putstr(str);
			write(1, "\" is not a valid unsigned number\n", 33);
			return (-1);
		}
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	rush(int a, int b);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 8;
	y = 4;
	if (argc >= 3)
	{
		x = strtoi(argv[1]);
		y = strtoi(argv[2]);
	}
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR: invalid arguments, expected x > 0 and y > 0\n", 51);
		return (1);
	}
	rush(x, y);
	return (0);
}
