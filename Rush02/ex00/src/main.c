/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:59:56 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/08 20:28:43 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bible.h"

int	main(int argc, char *argv[])
{
	char	*value;
	char	*filename;
	t_value	*vals;

	if (argc == 2)
		filename = ft_strdup("numbers.dict", 12);
	else if (argc == 3)
		filename = argv[1];
	else
	{
		ft_putstr("Expected 2 or 3 arguments\n");
		return (1);
	}
	value = argv[argc - 1];
	if (!ft_verify(value))
		return (1);
	vals = (t_value *)malloc(
			sizeof(t_value) * (ft_count_lines(filename) + 1));
	ft_readdict(vals, filename);
	write_all(vals, value);
	ft_free_dict(vals);
}
