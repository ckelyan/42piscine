#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int n, int pow);

int main(int argc, char *argv[])
{
	if (argc != 3) return (1);
	int	n = atoi(argv[1]);
	int	p = atoi(argv[2]);
	printf("%d\n", ft_recursive_power(n, p));
}
