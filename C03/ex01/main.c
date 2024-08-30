#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);



int main(int argc, char *argv[])
{
	if (argc != 4) return 1;
	unsigned int n = atoi(argv[3]);
	printf("user: %d\n", ft_strncmp(argv[1], argv[2], n));
	printf("syst: %d\n", strncmp(argv[1], argv[2], n));
}
