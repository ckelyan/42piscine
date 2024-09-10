/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:41:52 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/10 13:54:23 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		file_count;
	int		file_idx;
	int		fh;
	char	buffer[MAX_BUFFER_SIZE];

	if (argc == 1 || (argc > 1 && argv[1][0] == '-'))
	{
		ft_readfile(STDIN_FILENO);
		return (0);
	}
	else
		fh = &open(argv[1], O_RDONLY);
	
	file_idx = -1;
	while (++file_idx < file_count)
	{
		ft_readfile(fh, buffer);
		close(fh);
	}
}
