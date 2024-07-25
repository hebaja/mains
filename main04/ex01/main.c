#include <stdlib.h>
#include <stdio.h>

void ft_putstr(char *str);

int main()
{
	char* str;
	str = malloc(sizeof(char) * 7);

	str = "Numenor";
	ft_putstr(str);
	ft_putstr("\n");

	ft_putstr("Hello, World!\n");
	ft_putstr("\n");

	ft_putstr("Hello, \tWorld!\n");

	char long_str[1001];
	for (int i = 0; i < 1000; i++)
		long_str[i] = 'a';
	long_str[1000] = '\0';
	ft_putstr(long_str);

	return (0);
}
