#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);
int ft_strlen(char *str);

int main()
{
        char *str1 = " --+--+1234ab567";
	char *str2 = " 42";
	char *str3 = "   -42";
	char *str4 = "4193 with words";
	char *str5 = "words and 987";
	char *str6 = "+2147483647";
	char *str7 = "-2147483648";
	
	int result = ft_atoi(str1);
	printf("Input: \"%s\", Output: %d\n", str1, result);

	result = ft_atoi(str2);
	printf("Input: \"%s\", Output: %d\n", str2, result);

	result = ft_atoi(str3);
	printf("Input: \"%s\", Output: %d\n", str3, result);

	result = ft_atoi(str4);
	printf("Input: \"%s\", Output: %d\n", str4, result);

	result = ft_atoi(str5);
	printf("Input: \"%s\", Output: %d\n", str5, result);
	
	result = ft_atoi(str6);
	printf("Input: \"%s\", Output: %d\n", str6, result);
	
	result = ft_atoi(str7);
	printf("Input: \"%s\", Output: %d\n", str7, result);
	
	return (0);

}

