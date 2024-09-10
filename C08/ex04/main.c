#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *tab);

int	main(int argc, char *argv[])
{
	struct s_stock_str *tab = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(tab);
}
