/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:43:42 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/11 17:15:04 by kcsajka          ###   ########.fr       */
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

void	ft_file_error(char *filename)
{
	ft_putstr("ft_tail: ", 2);
	ft_putstr(filename, 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errno), 2);
	ft_putstr("\n", 2);
}

void	ft_readtail(int fh, int bytes)
{
	char	buffer[MAX_BUFFER_SIZE];
	int		buffer_size;
	int		i;

	buffer_size = 0;
	while ((buffer_size = read(fh, buffer, MAX_BUFFER_SIZE)))
	{
		i = -1;
		while (++i < buffer_size)
			ft_putchar(buffer[i], 1);
	}
}
