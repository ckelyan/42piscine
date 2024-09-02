/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:31:46 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/02 15:32:40 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **s1, char **s2)
{
	char *const	t = *s1;

	*s1 = *s2;
	*s2 = t;
}

char	**sort_strings(char **strings, int size)
{
	int	i;
	int	swapped;

	i = 0;
	swapped = 0;
	while (1)
	{
		if (i >= size -2)
		{
			if (!swapped)
				break ;
			swapped = 0;
			i = 0;
		}
		if (ft_strcmp(strings[i], strings[i +1]) < 0)
		{
			swapped = 1;
			swap(&strings[i], &strings[i +1]);
		}
		i++;
	}
	return (strings);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
		sort_strings(argv + 1, argc);
	while (argc > 1)
		putstr(argv[--argc]);
}
