/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:35:03 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/04 16:05:47 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	ft_swap(char *c1, char *c2)
{
	char const	t = *c1;

	*c1 = *c2;
	*c2 = t;
}

int	check_validity(char *state)
{
	int	si;
	int	i;
	int	iv;
	int	xdiff;
	int	ydiff;

	si = -1;
	while (++si < 10)
	{
		iv = state[si] - '0';
		i = -1;
		while (++i < 10)
		{
			if ((state[i] < '0' || state[i] > '9') || i == si)
				continue ;
			xdiff = (si - i);
			ydiff = (iv - (state[i] - '0'));
			if (xdiff < 0 || ydiff < 0)
				xdiff = -xdiff;
			if (xdiff == ydiff)
				return (0);
		}
	}
	return (1);
}

int	ft_find_solutions(char *state, int start_idx, int end_idx, int count)
{
	int	i;

	i = 0;
	if ((start_idx == end_idx) && check_validity(state))
	{
		count++;
		ft_putstr(state);
	}
	else
	{
		i = start_idx - 1;
		while (++i <= end_idx)
		{
			ft_swap(state + start_idx, state + i);
			count = ft_find_solutions(state, start_idx + 1, end_idx, count);
			ft_swap(state + start_idx, state + i);
		}
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	char	initial[11];
	int		i;

	i = -1;
	while (++i < 10)
		initial[i] = i + '0';
	return (ft_find_solutions(initial, 0, 9, 0));
}
