#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
  int a = 48;
  int b = 49;
  int space = 32;
  int break_line = 10;

  printf("%d %d\n", a, b);
  ft_swap(&a, &b);
  printf("%d %d\n", a, b);

  return 0;
}
