/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:16:21 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/26 14:54:53 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	return (32 <= c && c <= 127);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main() {
	char c = 127;
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable(" !\""));
	printf("%d\n", ft_str_is_printable(&c));
}*/
