#include <string.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);
void	*ft_put_hex_addr(void *addr);
int ft_get_int_from_ptr(void *ptr);
int	ft_pow(int base, int exp);

char ft_get_long_from_ptr(void *ptr)
{
	return *(char *)ptr;
}

int main()
{
	char *c = "bonjour les aminches c'est fou tout ce qu'on peut faire avec printmemory";
	int a = 1642;
	char *c2 = "\tlol\nlol c'est\ndingue";
	(void)a;
	(void)c2;
	//printf("%u\n", ft_get_long_from_ptr(&c));
	ft_print_memory(c, 92);
}
