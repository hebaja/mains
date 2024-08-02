#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*res;
	
	if (argc >= 2)
	{
		res = ft_strdup(argv[1]);
		if (res == NULL)
			printf("error");
		else
			printf("%s", res);
	}
	else if (argc == 1)
	{
		char *str = "\0";
		res = ft_strdup(str);
		if (res == NULL)
			printf("error");
		else
			printf("%s", res);
	}
	free(res);	
	return (0);
}
