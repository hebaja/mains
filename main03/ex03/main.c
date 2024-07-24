#include <stdio.h>
#include <stdlib.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char* src;
	char* result;
	char dest[25] = "best band > ";

	src = malloc(sizeof(char*));
	src = "nevermore";

	printf("%s\n", dest);
	printf("%s\n", src);
    
	result = ft_strncat(dest, src, 5);

	printf("%s\n", result);

	return (0);
}
