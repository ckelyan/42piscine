#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

void print_null(char str[], int size)
{
	fputs("\"", stdout);
	for(int i = 0; i < size; i++) {
		if (str[i] == '\0')
			fputs("\\0", stdout);
		else
			printf("%c", str[i]);
	}
	fputs("\"", stdout);
}

int main(int argc, char *argv[])
{
	char dest[50] = "Hello, ";
	char dest2[50] = "Hello, ";
	
	if (argc != 2) return (1);
	print_null(ft_strcat(dest, argv[1]), 15);
	puts("");
	print_null(strcat(dest2, argv[1]), 15);
}
