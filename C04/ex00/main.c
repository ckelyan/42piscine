#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	printf("%d / %lu\n", ft_strlen(argv[1]), strlen(argv[1]));
}
