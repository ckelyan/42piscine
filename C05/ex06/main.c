#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int n);

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	printf("%d\n", ft_is_prime(atoi(argv[1])));
}
