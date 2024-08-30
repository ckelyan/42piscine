#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *h, char *n);

int main(int argc, char *argv[])
{
	char	*str;
	char	*res;
	char	*needle;
	int		needle_length;
	
	if (argc != 3) return 0;
	str = argv[1];
	needle = argv[2];
	needle_length = strlen(needle);
	res = ft_strstr(str, needle);
	if (!res)
		printf("string \"%s\" not found\n", needle);
	else if (!needle_length)
		printf("needle is empty, str returned\n");
	else
		printf("%.*s\n", needle_length, res);
	if (strstr(str, needle) == res)
		printf("strstr and ft_strstr point to the same address!");
}
