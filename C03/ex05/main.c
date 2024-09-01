#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strlcat(char *d, char *s, unsigned int n);

int main(int argc, char *argv[])
{
	char	dest[12] = "Hello, ";
	char	*word;
	int		n;
	int		as;
	char	*res1;
	char	*res2;
	if (argc != 4) return 1;
	word = argv[1];
	n = atoi(argv[2]);
	as = atoi(argv[3]);
	res1 = ft_strlcat(dest, "wow");
}
