#include <stdio.h>

int ft_fibonacci(int index);

int main()
{
	printf("Index -1 --> %d\n", ft_fibonacci(-1));
	printf("Index 0 --> %d\n", ft_fibonacci(0));
	printf("Index 1 --> %d\n", ft_fibonacci(1));
	printf("Index 2 --> %d\n", ft_fibonacci(2));
	printf("Index 3 --> %d\n", ft_fibonacci(3));
	printf("Index 4 --> %d\n", ft_fibonacci(4));
	printf("Index 5 --> %d\n", ft_fibonacci(5));
	printf("Index 6 --> %d\n", ft_fibonacci(6));

	return (0);	
}

