#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int n);

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
}
