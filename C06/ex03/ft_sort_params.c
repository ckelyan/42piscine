#include <unistd.h>
#include <stdio.h>

void	putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	//write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	//putstr("comparing...");
	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		//printf("compared %c with %c (%d)\n", s1[i], s1[i], i);
		i++;
	}
	//putstr("done comparing...");
	return (s1[i] - s2[i]);
}



void	swap(char **s1, char **s2)
{
	char *t = *s1;
	*s1 = *s2;
	*s2 = t;
}

char	**sort_strings(char **strings, int size)
{
	int	i;
	int j;
	int	swapped;

	i = 0;
	swapped = 0;
	while (1)
	{
		j = 0;
		while (j < size - 1)
			putstr(strings[j++]);
		putstr("\n");
		if (i >= size -1)
		{
			if (!swapped)
				break ;
			swapped = 0;
			i = 0;
		}
		//printf("%s / %s? %d\n", strings[i], strings[i + 1], ft_strcmp(strings[i], strings[i +1]));
		if (ft_strcmp(strings[i], strings[i + 1]) > 0)
		{
			printf("%s is bad\n", strings[i]);
			swapped = 1;
			swap(&strings[i], &strings[i+1]);
		}
		i++;
	}
	return (strings);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
		sort_strings(argv + 1, argc);
	//while (argc > 1)
	//	putstr(argv[--argc]);
}
