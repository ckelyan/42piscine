/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:34:09 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/22 11:11:55 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 'a' - 'A';
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
