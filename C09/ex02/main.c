#include <stdio.h>
char	**ft_split(char *str, char *charset);
int	count_strings(char *str, char *charset);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	**res;
	int		i;
	if (argc != 3) return (1);
	res = ft_split(argv[1], argv[2]);
	i = -1;
	if (!res)
		return printf("returned null\n");
	while (res[++i])
		printf("%p -> %s%s\n", &res[i], res[i], res[i][ft_strlen(res[i]) + 1] == '\0' ? "\\0" : "?");
}
