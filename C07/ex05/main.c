#include <stdio.h>
char	**ft_split(char *str, char *charset);
int	count_strings(char *str, char *charset);

int	main(int argc, char *argv[])
{
	char	**res;
	int		i;
	if (argc != 3) return (1);
	res = ft_split(argv[1], argv[2]);
	i = -1;
	while (res[++i])
		printf("%p -> %s\n", &res[i], res[i]);
	printf("%p -> %s", &res[i], res[i]);
}
