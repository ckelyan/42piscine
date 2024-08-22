/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:59:07 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/22 15:00:18 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	if (size == 0) return (0);
	int	i;
	
	i = 0;
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size - 2)
	{
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
  printf("\n");
}

int main() {
  char *str1 = "Hello";
  char str2[6];
  char *str3 = "Hello";
  char str4[6];

  fputs("original:", stdout);
  printnull(str1, 6);
  puts("");

  ft_strlcpy(str2, str1, 6);

  fputs("ft_strlcpy: ", stdout);
  printnull(str2, 6);
  puts("");
  
  strlcpy(str4, str3, 6);
  
  fputs("strlcpy: ", stdout);
  printnull(str4, 6);
}*/
