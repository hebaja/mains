#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
  int num;
  int* i = &num;
  ft_ft(i);

  printf("%d", num);

  return 0;
}
