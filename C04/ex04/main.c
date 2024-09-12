#include <limits.h>
#include <stdio.h>

void	ft_putnbr_base(int i, char *base);

int main()
{
	char *hexb = "'~";
	ft_putnbr_base(-2143247366, hexb);
	printf("\n");
	ft_putnbr_base(INT_MAX, hexb);
	printf("\n%x", INT_MIN);
}
