/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:16:21 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/22 10:23:45 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_numeric(str[i]) == 0)
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
