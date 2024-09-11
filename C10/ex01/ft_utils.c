/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:43:42 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/11 12:10:33 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	ft_readfile(int fh)
{
	char	buffer[MAX_BUFFER_SIZE];
	int		buffer_size;
	int		i;

	buffer_size = 1;
	while (buffer_size)
	{
		buffer_size = read(fh, buffer, MAX_BUFFER_SIZE);
		i = -1;
		while (++i < buffer_size)
			ft_putchar(buffer[i]);
	}
}
