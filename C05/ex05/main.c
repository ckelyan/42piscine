#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int n);

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	printf("%d\n", ft_sqrt(atoi(argv[1])));
}
