int	ft_is_sort(int *tab, int len, int (*f)(int, int));

#include <stdio.h>
int	intcmp(int n, int m)
{
	if (n < m)
		return -1;
	if (n > m)
		return 1;
	return (0);
}

int main(void)
{
	int	t[] = { 1, 42, 45, 10000, 1144444 };
	printf("%d!\n", ft_is_sort(t, sizeof(t) / sizeof(int), &intcmp));
}
