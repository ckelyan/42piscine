/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:41:52 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/09 18:07:10 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		fh;
	char	buffer[MAX_BUFFER_SIZE];

	if (argc == 1)
	{
		ft_error("File name missing.");
		return (1);
	}
	if (argc > 2)
	{
		ft_error("Too many arguments.");
		return (1);
	}
	fh = open(argv[1], O_RDONLY);
	if (fh == -1)
	{
		ft_error("Cannot read file.");
		return (1);
	}
	ft_readfile(fh, buffer);
	close(fh);
}
