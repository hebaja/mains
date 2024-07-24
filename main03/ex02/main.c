#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char dest[25] = "best band -> ";
	char* result;
	char* src;

	src = malloc(sizeof(char*));
	src = "nevermore";

	printf("%s\n", dest);
	printf("%s\n", src);
	result = ft_strcat(dest, src);
	printf("%s", result);

	return (0);
}
