/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:14:18 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/06 20:37:26 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	to_base_10(char *s, char *baseds);
int		get_length(int n, int base);
int		ft_strlen(char *s);

int	check_validity(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) < 2)
		return (1);
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

void	rev_str(char *s)
{
	int		i;
	int		mx;
	char	t;

	i = -1;
	mx = ft_strlen(s) - 1;
	while (++i <= mx / 2)
	{
		t = s[i];
		s[i] = s[mx - i];
		s[mx - i] = t;
	}
}

void	ft_atoi_base_helper(char *dest, long n, char* baseds, long base)
{
	if (n < base)
	{
		*dest++ = baseds[n];
		*dest = '\0';
		return ;
	}
	ft_atoi_base_helper(dest + 1, n / base, baseds, base);
	*dest = baseds[n % base];
}

char	*ft_atoi_base(long n, char *baseds)
{
	char	*res;
	int		res_length;

	if (n == 0)
	{
		res = (char *)malloc(2);
		res = {"0"};
	}
	res_length = get_length(n, ft_strlen(baseds) + (n < 0));
	res = (char *)malloc(res_length + 1);
	if (n < 0)
		*res++ = '-';
	ft_atoi_base_helper(res, n, baseds, ft_strlen(baseds));
	rev_str(res);
	return (res);
}
#include <stdio.h>
char	*ft_convert_base(char *nbr, char *baseds_from, char *baseds_to)
{
	long	dec_repr;
	int		sign;

	if (check_validity(baseds_from) || check_validity(baseds_to))
		return (0);
	sign = 1;
	while ((9 <= *nbr && *nbr <= 13) || *nbr == 32)
		nbr++;
	while (*nbr == '-' || *nbr == '+')
		if (*nbr++ == '-')
			sign *= -1;
	dec_repr = to_base_10(nbr, baseds_from) * sign;
	return (ft_atoi_base(dec_repr, baseds_to));
	/*res_length = get_length(dec_repr, ft_strlen(baseds_to)) + (sign < 0);
	res = (char *)malloc(res_length + 1);
	if (sign < 0)
		*res = '-';
	ft_atoi_base(res + (sign < 0), dec_repr, baseds_to);
	if (res[res_length] == '\0')
		printf("ends with \\0\n");
	else
		printf("does not end with \\0\n");
	return (res);*/
}
