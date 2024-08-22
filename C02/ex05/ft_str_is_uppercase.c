/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:16:21 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/22 10:26:11 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	return ('A' <= c && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main() {
	printf("%d\n", is_alpha('a'));
	printf("%d\n", ft_str_is_alpha("abcd"));
	printf("%d\n", ft_str_is_alpha("azZA"));
	printf("%d\n", ft_str_is_alpha("asd1"));
}*/
