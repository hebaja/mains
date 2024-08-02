#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int 	main(int argc, char **argv)
{
	int i;
	int *ptr;
	int min;
	int max;
	int size;

	if (argc != 3)
		printf("wrong numbers of arguments\n");
	else
	{
		i = 0;
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		size = max - min;
		ptr = ft_range(min, max);
		if (ptr != NULL)
		{
			while(i < size)
			{	
				printf("%d ", ptr[i]);
				i++;
			}
		}
	       	else
			printf("error");
	}
	free(ptr);
	return (0);
}
