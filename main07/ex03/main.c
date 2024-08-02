#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(char *str);

int	matrix_len(int args_qt, char **matrix)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (++i < args_qt)
		size = size + ft_strlen(matrix[i]);
	return size;
}

int	main(int argc, char **argv)
{
	char	*array;
	int	args_size;
	int	sep_position;

	sep_position = argc - 1;
	args_size = matrix_len(argc - 1, argv);
	printf("%d\n", args_size);
	array = ft_strjoin(args_size, argv, argv[sep_position]);
	printf("%s", array);
	free(array);
	return (0);
}
