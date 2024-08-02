#include <stdio.h>

int ft_find_next_prime(int nb);

int main()
{
	int i = 1;

	while(i++ < 97)
		printf("%d -> %d\n", i,ft_find_next_prime(i));

	return (0);
}
