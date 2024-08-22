/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:59:07 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/22 16:31:16 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		if (i < size -1)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

void printnull(char str[], size_t size)
{
  fputs("\"", stdout);
  for(size_t i = 0; i < size; i++) {
    if (str[i] == '\0') {
        fputs("\\0", stdout);
    }
    printf("%c", str[i]);
  }
  fputs("\"", stdout);
}

void test(char *str, int n) {
	char str1[50];
	char str2[50];

	int user_res = ft_strlcpy(str1, str, n);
	int syst_res = strlcpy(str2, str, n);

	fputs("user: ", stdout);
	printf("\"%s\" (len %d)", str1, user_res);
	puts("");
	fputs("system: ", stdout);
	printf("\"%s\" (len %d)", str2, syst_res);
	puts("");
}
int main() {
	test("Hello", 6);
	test("Hello", 10);
	test("Hello", 3);
	test("", 6);
	test("wow", 1);
	test("World!!!", 6);
}*/
