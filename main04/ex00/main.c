#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);

int main()
{
	char* str;
	str = malloc(sizeof(char) * 7);
	char* hello = "Hello, World!\n";
	char* new_line = "\n";
	char* hello_tab = "Hello, \tWorld!\n";

	str = "Morgoth";
	printf("%s -> %i\n", str, ft_strlen(str));
	printf("%s |-> %i\n", hello, ft_strlen(hello));
	printf("%s |-> %i\n", new_line, ft_strlen(new_line));
	printf("%s |-> %i\n", hello_tab, ft_strlen(hello_tab));

	char long_str[1001];
	for (int i = 0; i < 1000; i++)
		long_str[i] = 'a';
	long_str[1000] = '\0';
	printf("%s -> %i\n", long_str, ft_strlen(long_str));

	return (0);
}
