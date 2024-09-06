/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:51:54 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/05 17:06:15 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	get_index_from_base(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

long	to_base_10(char *s, char *baseds)
{
	long	res;
	int		base;
	int		i;
	int		pow;

	base = ft_strlen(baseds);
	if (base < 2 || !*s || (*s == baseds[0] && !s[1]))
		return (0);
	i = ft_strlen(s);
	res = 0;
	pow = 1;
	while (--i >= 0)
	{
		res += get_index_from_base(baseds, s[i]) * pow;
		pow *= base;
	}
	return (res);
}

int	get_length(int nb, int base)
{
	if (nb < base)
		return (1);
	return (1 + get_length(nb / base, base));
}
