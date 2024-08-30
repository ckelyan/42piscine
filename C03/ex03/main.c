#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

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
	
	if (argc != 3) return (1);
	int v = atoi(argv[2]);
	print_null(ft_strncat(dest, argv[1], v), 15);
	puts("");
	print_null(strncat(dest2, argv[1], v), 15);
}
