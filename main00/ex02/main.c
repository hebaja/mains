#include <unistd.h>

void ft_print_reverse_alphabet(void);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
  ft_print_reverse_alphabet();
  ft_putchar(10);
  return (0);
}
