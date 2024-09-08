/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:36:21 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/08 11:07:13 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
#define PARSE_H
#include "utils.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_BUFFER_SIZE 2048
#define MAX_LINE_SIZE 256
#define MAX_STR_SIZE 256

typedef struct s_value
{
	char	*lvalue;
	char	*rvalue;
	int		power;
}	t_value;

int	ft_open_file(char *filename)
{
	int	fh;

	fh = open(filename, O_RDONLY);
	if (fh == -1)
	{
		ft_putstr("error trying to read file '");
		ft_putstr(filename);
		ft_putstr("'\n");
		return (-1);
	}
	return (fh);
}

int	ft_count_lines(char *filename)
{
	char	buff[MAX_BUFFER_SIZE];
	int		valid_line;
	int		res;
	int		fh;

	fh = ft_open_file(filename);
	if (fh == -1)
		return (-1);
	res = 0;
	valid_line = 0;
	while (read(fh, buff, 1))
	{
		if (*buff == '\n' && valid_line)
		{
			res++;
			valid_line = 0;
		}
		if (*buff != '\n')
			valid_line = 1;
	}
	close(fh);
	return (res);
}

int	register_value(t_value *dest, char *line)
{
	char	buff[MAX_STR_SIZE];
	int		buff_size;

	buff_size = 0;
	while (*line)
	{
		if (*line == ':')
		{
			buff[buff_size] = '\0';
			dest->lvalue = ft_strdup(buff, buff_size);
			dest->power = buff_size -1;
			buff_size = 0;
			line++;
			continue ;
		}
		if (!ft_is_space(*line))
			buff[buff_size++] = *line;
		line++;
	}
	buff[buff_size] = '\0';
	dest->rvalue = ft_strdup(buff, buff_size);
	return (0);
}

t_value	*ft_readdict(t_value *result, char *filename)
{
	char	buff[MAX_BUFFER_SIZE];
	char	linebuffer[MAX_LINE_SIZE];
	int		line_idx;
	int		fh;

	fh = ft_open_file(filename);
	if (fh == -1)
		return (0);
	line_idx = 0;
	while (read(fh, buff, 1) != 0)
	{
		if (*buff == '\n')
		{
			if (line_idx < 1)
				continue ;
			linebuffer[line_idx] = '\0';
			line_idx = 0;
			register_value(result++, linebuffer);
		}
		else if (!ft_is_space(*buff))
			linebuffer[line_idx++] = *buff;
	}
	result->lvalue = 0;
	return (result);
}
#endif
