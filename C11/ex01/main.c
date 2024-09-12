int	*ft_map(int *t, int l, int(*f)(int));

int	mb2(int n)
{
	return (n * 2);
}
#include <stdio.h>
int main(void)
{
	int	t[] = { 49, 2, -21, 21, -42, 11 };
	int	*r;
	r = ft_map(t, sizeof(t) / sizeof(t[0]), &mb2);
	for (unsigned long i = 0; i < (sizeof(t) / 4); i++)
		printf("%d: %d\n", t[i], r[i]);
}
