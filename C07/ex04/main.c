#include <stdio.h>

int	get_index_from_base(char *s, char c);
int	to_base_10(char *s, char* bds, int b);
int	get_length(int nb, int base);
void	ft_atoi_base(char *d, long n, char *bds, long b);
void	rev_str(char *s);
char	*ft_convert_base(char *n, char *bdsf, char *bdst);

int main2(int argc, char *argv[])
{
	char dest[20];
	(void)argv;
	if (argc < 1) return (1);
	ft_atoi_base(dest, 14094, "0123456789", 10);
	rev_str(dest);
	printf("%s\n", dest);
	printf("%s\n", ft_convert_base("33416", "01234567", "0123456789abcdef"));
	printf("%d\n", to_base_10("11A", "0123456789ABCDEF", 16));
	printf("%d\n", get_length(282244134, 16));
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc < 4) return (1);
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
}
