int	ft_any(char **tab, int (*f)(char*));

#include <stdio.h>
int	is_42_string(char *str)
{
	if (str[0] == '4' && str[1] == '2' && str[2] == '\0')
		return (1);
	return (0);
}

int main(void)
{
	char	*t[4] = { "lol", "42", "baz" };
	t[3] = 0;
	printf("%s!\n", ft_any(t, &is_42_string) ? "YES" : "NO");
}
