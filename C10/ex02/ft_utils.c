/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:43:42 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/12 16:03:56 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <string.h>
#include <errno.h>

void	ft_putchar(char c, int fh)
{
	write(fh, &c, 1);
}

void	ft_putstr(char *str, int fh)
{
	while (*str)
		ft_putchar(*str++, fh);
}

long	ft_atoi(char *str)
{
	long	res;

	res = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (-1);
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res);
}

char	*get_c_value(int ac, char **av)
{
	int	i;

	i = -1;
	while (++i < ac)
	{
		if (av[i][0] == '-' && av[i][1] == 'c')
		{
			if (i < ac - 1)
				return (av[i + 1]);
			else
			{
				ft_putstr("ft_tail: opton requires an argument -- c\n", 2);
				return (0);
			}
		}
	}
	return (0);
}

void	ft_file_error(char *filename)
{
	ft_putstr("ft_tail: ", 2);
	ft_putstr(filename, 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errno), 2);
	ft_putstr("\n", 2);
}
