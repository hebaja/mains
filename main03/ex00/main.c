#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);

int main()
{
	char* s1;
	char* s2;
	int result;

	s1 = malloc(sizeof(char*) * 3);
	s2 = malloc(sizeof(char*) * 3);

	s1 = "acb";
	s2 = "aca";
	result = ft_strcmp(s1, s2);
	printf("%s - %s = %d\n", s1, s2, result);
	
	s1 = "ABC";
	s2 = "ABC";
	result = ft_strcmp(s1, s2);
	printf("%s - %s = %d\n", s1, s2, result);
	
	s1 = "ABC";
	s2 = "AB";
	result = ft_strcmp(s1, s2);
	printf("%s - %s = %d\n", s1, s2, result);

	s1 = "ABA";
	s2 = "ABZ";
	result = ft_strcmp(s1, s2);
	printf("%s - %s = %d\n", s1, s2, result);
	
	s1 = "ABJ";
	s2 = "ABC";
	result = ft_strcmp(s1, s2);
	printf("%s - %s = %d\n", s1, s2, result);
	
	return (0);

}
