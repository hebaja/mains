#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void print_arr(int* arr, int size) {
  int i = 0;
  while(i < size) {
    printf("%d", arr[i]);
    i++;
  }
}

int main()
{
  int size = 7;
  int arr[7] = {0, 1, 2, 3, 4, 5, 6};

  print_arr(arr, size);
  printf("\n");
  ft_rev_int_tab(arr, size);
  print_arr(arr, size);

  return 0;
}
