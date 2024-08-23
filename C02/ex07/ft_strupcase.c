/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:34:09 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/22 11:09:43 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] += 'A' - 'a';
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() {
	char text[] = "1hello123";
	printf("%s\n", text);
	char* res = ft_strupcase(text);
	printf("%s\n", res);
}*/
