#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char* string;
	char* to_find;
	char* result;

	string = "dream theater";
	to_find = "the";
	result = ft_strstr(string, to_find);
	printf("%s > %s -> %s\n", string, to_find, result);

	to_find = "ago";
	result = ft_strstr(string, to_find);
	printf("%s > %s -> %s\n", string, to_find, result);
	
	return (0);
}
