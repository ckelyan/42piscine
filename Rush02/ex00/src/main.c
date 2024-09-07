/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:47:27 by jruiz             #+#    #+#             */
/*   Updated: 2024/09/07 11:18:44 by jruiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bible.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2 || argc > 3)
	{
		write (1, "Erreur argument\n", 22);
	}
	if (argc == 2)
	{
		/*ft_atoi(argv[i]);*/
		ft_verif(argv[i]);
		ft_strlens(argv[i]);
	}
	return (0);
}
