#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main(int argc, char *argv[])
{
	char	d[100];
	if (argc != 2) return (1);
	strcpy(d, argv[1]);
	ft_strcapitalize(d);
	printf("res: \"%s\"", d);
	return (0);
}
