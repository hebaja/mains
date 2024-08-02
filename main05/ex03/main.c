#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main()
{
	int nbr = -1;
	int power = -1;

	while(nbr < 10)
	{
		power = -1;
		while(power < 10)
		{
			printf("%d power %d -> %d\n", nbr, power, ft_recursive_power(nbr, power));
			power++;
		}
		nbr++;
	}

	/*
	int result = ft_recursive_power(2, 2);
	printf("2 power 2 should return 4 ---> %d\n", result);

	result = ft_recursive_power(2, 4);
	printf("2 power 6 should return 16 ---> %d\n", result);

	result = ft_recursive_power(2, 0);
	printf("2 power 0 should return 1 ---> %d\n", result);

	result = ft_recursive_power(0, 0);
	printf("0 power 0 should return 1 ---> %d\n", result);
	*/

	return (0);
}

