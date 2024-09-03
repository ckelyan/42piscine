#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *d, char *s, unsigned int n);

int main(int argc, char *argv[])
{
	char	dest[30] = "Hello, ";
	char	dest2[30] = "Hello, ";
	char	*word;
	int		n;
	int		res1;
	int		res2;
	if (argc != 3) return 1;
	word = argv[1];
	n = atoi(argv[2]);
	res1 = ft_strlcat(dest, word, n);
	res2 = strlcat(dest2, word, n);
	printf("actual length of dest: %lu\n", strlen(dest));
	printf("%d: %s\n", res1, dest);
	printf("%d: %s\n", res2, dest2);
}
