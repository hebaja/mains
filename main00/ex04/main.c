#include <unistd.h>

void ft_is_negative(int n);
void ft_putchar(char c);

int main()
{
  ft_putchar('0');
  ft_is_negative(0);
  ft_putchar(10);
  ft_putchar('4');
  ft_is_negative(4);
  ft_putchar(10);
  ft_putchar('-');
  ft_putchar('1');
  ft_is_negative(-1);
  ft_putchar(10);

  return (0);
}
