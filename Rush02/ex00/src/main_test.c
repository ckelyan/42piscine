#include "parse.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	
	t_value *vals = (t_value *)malloc(
			sizeof(t_value) * (ft_count_lines(argv[1]) +1));
	ft_readdict(vals, argv[1]);
	//printf("%s", vals[0].lvalue);
	while (vals->lvalue != 0)
	{
		printf("%s (%d):\n\t%s\n", vals->lvalue, vals->power, vals->rvalue);
		vals++;
	}
}
