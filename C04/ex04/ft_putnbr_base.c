/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:41:18 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 18:12:22 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_duplicates(char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j])
	{
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

void	ft_putnbr_base_helper(int n, char *basech, int base)
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
	int	len;

	len = ft_strlen(base);
	if (len < 2 || check_duplicates(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	ft_putnbr_base_helper(nbr, base, len);
}
