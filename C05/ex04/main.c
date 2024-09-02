#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int n);

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	printf("%d\n", ft_fibonacci(atoi(argv[1])));
}
