/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:41:52 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/12 16:08:40 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>// tmp

int	ft_get_start_pos(int fh, long bytes)
{
	char	buffer[MAX_BUFFER_SIZE];
	int		buffer_size;
	int		total_bytes;

	buffer_size = 1;
	total_bytes = 0;
	while (buffer_size)
	{
		buffer_size = read(fh, buffer, MAX_BUFFER_SIZE);
		total_bytes += buffer_size;
	}
	if ((total_bytes - bytes) < 0)
		return (0);
	return (total_bytes - bytes);
}

void	ft_read_from(int fh, long starting_bytes)
{
	char	buffer[MAX_BUFFER_SIZE];
	int		buffer_size;
	int		read_bytes;
	int		i;

	buffer_size = 1;
	read_bytes = 0;
	while (read_bytes < starting_bytes)
		read_bytes += read(fh, buffer, 1);
	while (buffer_size)
	{
		i = -1;
		buffer_size = read(fh, buffer, MAX_BUFFER_SIZE);
		while (++i < buffer_size)
			ft_putchar(buffer[i], 1);
	}
}

void	ft_tail_wrapper(char *filename, long bytes)
{
	int	start_pos;
	int	fh;

	fh = STDIN_FILENO;
	fh = open(filename, O_RDONLY);
	if (fh == -1)
	{
		ft_file_error(filename);
		return ;
	}
	start_pos = ft_get_start_pos(fh, bytes);
	close(fh);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
	{
		ft_file_error(filename);
		return ;
	}
	ft_read_from(fh, start_pos);
	close(fh);
}

void	ft_handle_files(int ac, char **av, long bytes)
{
	int	file_idx;
	int	showname;

	showname = ac > 1;
	file_idx = -1;
	while (++file_idx < ac)
	{
		if (showname)
		{
			ft_putstr("==> ", 1);
			ft_putstr(av[file_idx], 1);
			ft_putstr(" <==\n", 1);
		}
		ft_tail_wrapper(av[file_idx], bytes);
		if (showname && file_idx < ac - 1)
			ft_putchar('\n', 1);
		errno = 0;
	}
}

int	main(int argc, char *argv[])
{
	long	bytes;
	char	*copt;

	copt = get_c_value(argc - 1, argv + 1);
	bytes = ft_atoi(copt);
	if (bytes == -1)
	{
		ft_putstr("ft_cat: illegal offset -- ", 2);
		ft_putstr(copt, 2);
		ft_putstr("\n", 2);
		return (1);
	}
	if (!bytes)
		return (0);
	if (argc == 1)
	{
		ft_read_from(0, ft_get_start_pos(0, bytes));
		return (0);
	}
	ft_handle_files(argc - 3, argv + 3, bytes);
}
