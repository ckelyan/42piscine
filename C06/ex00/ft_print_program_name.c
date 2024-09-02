/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:05:08 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/02 12:08:53 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	putstr(argv[0]);
	putstr("\n");
}
