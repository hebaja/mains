#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	char* str;
	char* decimal;
	char* binary;
	char* hexadecimal;
	char* octal;
	char* one;
	char* empty;
	char* invalid_plus;
	char* invalid_minus;
	char* repeated;
	str = "      --++--+-+-1234fddkjdskf9090";
	decimal = "0123456789";
	binary = "01";
	hexadecimal = "0123456789ABCDEF";
	octal = "poneyvif";
	one = "0";
	empty = " ";
	invalid_plus = "0123456+";
	invalid_minus = "012345678-";
	repeated = "01234566789";

	printf(" from decimal to decimal -> %i\n", ft_atoi_base(str, decimal));
	printf(" from binary to decimal -> %i\n", ft_atoi_base(str, binary));
	printf(" from hexadecimal to decimal -> %i\n", ft_atoi_base(str, hexadecimal));
	printf(" from octal to decimal -> %i\n", ft_atoi_base(str, octal));
	printf("one\n");
	ft_atoi_base(str, one);
	printf("empty\n");
	ft_atoi_base(str, empty);
	printf("invalid_plus\n");
	ft_atoi_base(str, invalid_plus);
	printf("invalid_minus\n");
	ft_atoi_base(str, invalid_minus);
	printf("repeated\n");
	ft_atoi_base(str, repeated);

	return (0);
}
