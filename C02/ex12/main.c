#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);
void	*ft_put_hex_addr(void *addr);
int	ft_pow(int base, int exp);

int main()
{
	//printf("%d\n", ft_pow(16, 4));
	char *str1 = "lol";
	ft_print_memory(str1, 4);
}
