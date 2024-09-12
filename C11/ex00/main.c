void	ft_foreach(int *t, int l, void(*f)(int));

#include <stdio.h>
void	putnbr(int n)
{
	printf("%d\n", n);
}

int main(void)
{
	int	t[] = { 498, 14, 42, 42, -42, 111 };
	ft_foreach(t, sizeof(t) / sizeof(t[0]), &putnbr);
}
