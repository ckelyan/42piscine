#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

void printnull(char str[], size_t size)
{
  fputs("\"", stdout);
  for(size_t i = 0; i < size; i++) {
    if (str[i] == '\0') {
        fputs("\\0", stdout);
    }
    printf("%c", str[i]);
  }
  fputs("\"", stdout);
}

void test(char *str) {
	char str1[50];
	char str2[50];
	memset(str1, '*', 50);
	memset(str2, '*', 50);

	ft_strcpy(str1, str);
	strcpy(str2, str);

	fputs("user: ", stdout);
	printnull(str1, 20);
	puts("");
	fputs("system: ", stdout);
	printnull(str2, 20);
	puts("");
}
int main() {
	test("Hello");
	test("");
	test("wow");
	test("World!!!");
}
