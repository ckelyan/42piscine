#include <stdio.h>

char	*ft_strdup(char *src);

int main(int argc, char *argv[])
{
	char	*dest;
	if (argc != 2) return (1);
	dest = ft_strdup(argv[1]);
	printf("%s", dest);
}
