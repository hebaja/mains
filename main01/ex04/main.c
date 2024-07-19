#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
  int a = 23;
  int b = 5;

  ft_ultimate_div_mod(&a, &b);

  printf("%d %d\n", a, b);

  return 0;
}
