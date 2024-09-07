#include "parse.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2) return (1);
	t_value *vals = ft_readdict(argv[1]);
	//printf("%s", vals[0].lvalue);
	while (vals)
	{
		printf("%s (%d):\n\t%s\n", vals->lvalue, vals->power, vals->rvalue);
		vals++;
	}
}
