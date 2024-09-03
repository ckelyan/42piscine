/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:41:18 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/03 15:45:44 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_validity(char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j])
	{
		if ((str[j] < 32 || str[j] > 126) || str[j] == '+' || str[j] == '-')
			return (1);
		i = 0;
		while (str[i])
		{
			if (i != j && str[i] == str[j])
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

void	ft_putnbr_base_helper(long n, char *basech, long base)
{
	if (n < base)
	{
		ft_putchar(basech[n]);
		return ;
	}
	ft_putnbr_base_helper(n / base, basech, base);
	ft_putchar(basech[n % base]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	len;
	long	n;

	n = (long)nbr;
	len = ft_strlen(base);
	if (len < 2 || check_validity(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	ft_putnbr_base_helper(n, base, len);
}
