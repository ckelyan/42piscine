/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:17:35 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/08 21:02:54 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bible.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

char	*ft_strdup(char *src, int size)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (size + 1));
	i = -1;
	while (src[++i] && i < size)
		res[i] = src[i];
	res[i] = '\0';
	return (res);
}

int	ft_verify(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (ft_strlen(str) > 37)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}
