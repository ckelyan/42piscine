int	ft_count_if(char **tab, int len, int (*f)(char*));

#include <stdio.h>
int	is_42_string(char *str)
{
	if (str[0] == '4' && str[1] == '2' && str[2] == '\0')
		return (1);
	return (0);
}

int main(void)
{
	char	*t[] = { "lol", "42", "baz", "42", "42", "lol" };
	printf("%d!\n", ft_count_if(t, sizeof(t) / sizeof(void *), &is_42_string));
}
