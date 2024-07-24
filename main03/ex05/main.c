#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[23] = "Steel ";
	char* src;
	unsigned int str_size;
	src = "meets steel!.....";

	printf("%s + %s[13] -> ", src, dest);
	str_size = ft_strlcat(dest, src, 13);
	printf("%s (%d)\n", dest, str_size);

	char dest2[12] = "Hammer";
	char* src2;
	src2 = "Fall";

	printf("%s + %s [12] -> ", src2, dest2);
	str_size = ft_strlcat(dest2, src2, 12);
	printf("%s (%d)\n", dest2, str_size);

	return (0);
}
