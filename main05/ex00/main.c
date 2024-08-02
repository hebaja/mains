#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main()
{
	int i = -3;

	while(++i <= 12)
	{
		printf("%d -> %d\n", i, ft_iterative_factorial(i));
	}

	return (0);
}

