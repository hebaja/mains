#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(int argc, char **argv)
{
	int *range;
	int min;
	int max;
	int size;
	int i;

	printf("number of arguments: %d\n", argc);

	if (argc != 3)
		printf("wrong numbers of arguments\n");
	else
	{
		i = 0;
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		size = ft_ultimate_range(&range, min, max);
	       	if (size <= 0)
			printf("wrong size");
		else if (size == -1)
			printf("problem allocating memory");
		else
		{
			if (range != NULL)
			{
				while (i < size)
				{
					printf("%d ", range[i]);
					i++;
				}
			}
			else
			{
				printf("error");
				return (0);
			}
		}
		free(range);
	}
	return (0);

}
