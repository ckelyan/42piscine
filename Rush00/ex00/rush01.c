#include <unistd.h>

void prnt(char c)
{
	write(1, &c, 1);
}

void rush(int x, int y, char *table) 
{
	x--; y--;
	if (table == NULL)
		table = "/*\\* *\\*/";
	char *cur = table;

	int	row = 0;
	int	col = 0;

	while (col <= y)
	{
		row = 0;
		while (row <= x)
		{
			if (row == 0)
				prnt(*cur);
			else if (row == x)
				prnt(*(cur +2));
			else
				prnt(*(cur +1));

			row++;
		}

		if (col == 0 || col == y - 1)
			cur += 3;

		prnt('\n');

		col++;
	}
}

#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	if (argc < 3) return 1;
	if (argc == 3)
		rush(atoi(argv[1]), atoi(argv[2]), NULL);
	else if (strlen(argv[3]) == 9)
		rush(atoi(argv[1]), atoi(argv[2]), argv[3]);
	else
		return 1;
}
