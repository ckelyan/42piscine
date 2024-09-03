#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

void printnull(char str[], size_t size)
{
  fputs("\"", stdout);
  for(size_t i = 0; i < size; i++) {
    if (str[i] == '\0')
        fputs("\\0", stdout);
	else
		printf("%c", str[i]);
  }
  fputs("\"", stdout);
}

int main(int argc, char *argv[]) {
	char dest1[30];
	char dest2[30];
	int  v;
	memset(dest1, '*', 29);
	memset(dest2, '*', 29);
	if (argc != 3) return 1;
	v = atoi(argv[2]);
	ft_strncpy(dest1, argv[1], v);
	strncpy(dest2, argv[1], v);
	printnull(dest1, v + 1);
	puts("");
	printnull(dest2, v + 1);
	puts("");
}
