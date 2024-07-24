#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	int result;
	char* s1;
	char* s2;

	s1 = malloc(sizeof(char*));
	s2 = malloc(sizeof(char*));

	s1 = "ABC";
	s2 = "AB";
	result = ft_strncmp(s1, s2, 3);
	printf("%s - %s (3) -> %d\n", s1, s2, result);

	s1 = "ABC";
	s2 = "AB";
	result = ft_strncmp(s1, s2, 2);
	printf("%s - %s (2) -> %d\n", s1, s2, result);

	return (0);
}
