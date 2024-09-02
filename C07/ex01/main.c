#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(int argc, char *argv[])
{
	int	*dest;
	if (argc != 3) return (1);
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	dest = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
		printf("%d", dest[i]);
}
