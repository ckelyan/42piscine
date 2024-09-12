/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:41:52 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/12 17:56:53 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int	main(int argc, char *argv[])
{
	int	file_idx;
	int	fh;

	
	if (argc == 1)
	{
		ft_hexdump(STDIN_FILENO, 1);
		return (0);
	}
	file_idx = 0;
	while (++file_idx < argc)
	{
		fh = open(argv[file_idx], O_RDONLY);
		if (fh == -1)
		{
			continue ;
		}
		ft_hexdump(fh, 1);
		close(fh);
		errno = 0;
	}
}
