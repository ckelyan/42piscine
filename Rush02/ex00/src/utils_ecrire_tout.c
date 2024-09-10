/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ecrire_tout.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:28:21 by fepopadi          #+#    #+#             */
/*   Updated: 2024/09/08 21:00:16 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bible.h"

t_value	*find_by_lvalue(t_value *values, char s[4])
{
	int	i;

	while (values->lvalue != 0)
	{
		i = 0;
		while (s[i])
		{
			if (values->lvalue[i] != s[i])
				break ;
			i++;
		}
		if (i == ft_strlen(s))
			return (values);
		values++;
	}
	return (0);
}

t_value	*find_by_power(t_value *values, int pow)
{
	while (values->lvalue != 0)
	{
		if (values->power == pow)
			return (values);
		values++;
	}
	return (0);
}

void	print_first_number(t_value *vals, char *tab)
{
	char	value[4];

	if (tab[0] == '0')
	{
		print_second_number(vals, ++tab);
		return ;
	}
	value[0] = *tab++;
	value[1] = '\0';
	ft_putstr(find_by_lvalue(vals, value)->rvalue);
	ft_putstr(" ");
	ft_putstr(find_by_power(vals, 2)->rvalue);
	ft_putstr(" ");
	print_second_number(vals, tab);
}

void	print_second_number(t_value *vals, char *tab)
{
	char	value[3];

	if (tab[0] == '0')
	{
		print_third_number(vals, ++tab);
		return ;
	}
	if (tab[0] == '1')
	{
		value[0] = *tab++;
		value[1] = *tab;
		value[2] = '\0';
		ft_putstr(find_by_lvalue(vals, value)->rvalue);
		ft_putstr(" ");
	}
	else
	{
		value[0] = *tab++;
		value[1] = '0';
		value[2] = '\0';
		ft_putstr(find_by_lvalue(vals, value)->rvalue);
		ft_putstr(" ");
		print_third_number(vals, tab);
	}
}

void	print_third_number(t_value *vals, char *tab)
{
	char	value[2];

	if (*tab == '0')
		return ;
	value[0] = *tab;
	value[1] = '\0';
	ft_putstr(find_by_lvalue(vals, value)->rvalue);
	ft_putstr(" ");
}
