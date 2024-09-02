#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int n);

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
}
