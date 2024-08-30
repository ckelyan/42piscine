#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[])
{
	if (argc != 3) return 1;
	printf("user: %d\n", ft_strcmp(argv[1], argv[2]));
	printf("syst: %d\n", strcmp(argv[1], argv[2]));
}
