#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main()
{	
	char* decimal;
	char* binary;
	char* hexadecimal;
	char* octal;
	char* one;
	char* empty;
	char* invalid_plus;
	char* invalid_minus;
	char* repeated;
	decimal = "0123456789";
	binary = "01";
	hexadecimal = "0123456789ABCDEF";
	octal = "poneyvif";
	one = "0";
	empty = " ";
	invalid_plus = "0123456+";
	invalid_minus = "012345678-";
	repeated = "01234566789";

	printf("decimal 125\n");
	ft_putnbr_base(125, decimal);
	printf("\n");

	printf("binary 125\n");
	ft_putnbr_base(125, binary);
	printf("\n");

	printf("hexadecimal 125\n");
	ft_putnbr_base(125, hexadecimal);
	printf("\n");

	printf("octal 125\n");
	ft_putnbr_base(125, octal);
	printf("\n");
  
	printf("decimal -465\n");
	ft_putnbr_base(-465, decimal);
	printf("\n");

	printf("binary -465\n");
	ft_putnbr_base(-465, binary);
	printf("\n");

	printf("hexadecimal -465\n");
	ft_putnbr_base(-465, hexadecimal);
	printf("\n");

	printf("octal -465\n");
	ft_putnbr_base(-465, octal);
	printf("\n");

	printf("base one\n ");
	ft_putnbr_base(125, one);
	printf("\n");

	printf("empty\n");
	ft_putnbr_base(-465, empty);
	printf("\n");

	printf("invalid_plus\n");
	ft_putnbr_base(125, invalid_plus);
	printf("\n");

	printf("invalid_minus\n");
	ft_putnbr_base(-465, invalid_minus);
	printf("\n");

	printf("repeated\n");
	ft_putnbr_base(125, repeated);

	return (0);
}
