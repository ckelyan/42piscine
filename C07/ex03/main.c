#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char *argv[])
{
	if (argc < 3) return (1);
	printf("%s", ft_strjoin(argc - 1, argv + 1, ", "));
}
