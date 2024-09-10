/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:41:52 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/10 15:18:28 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int	main(int argc, char *argv[])
{
	int		file_idx;
	int		fh;

	if (argc == 1 || (argc > 1 && argv[1][0] == '-'))
	{
		ft_readfile(STDIN_FILENO);
		return (0);
	}
	
	file_idx = 0;
	while (++file_idx < argc)
	{
		fh = open(argv[file_idx], O_RDONLY);
		if (fh == -1)
		{
			ft_error("ft_cat: ");
			ft_error(argv[file_idx]);
			ft_error(": ");
			ft_error(strerror(errno));
			continue ;
		}
		ft_readfile(fh);
		close(fh);
	}
}
