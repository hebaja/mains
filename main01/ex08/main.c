#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void print_arr(int* arr, int size) {
  int i = 0;
  while(i < size) {
    printf("%d", arr[i]);
    i++;
  }
}

int main()
{
  int arr[7] = {1, 3, 6, 1, 0, 5, 5};

  print_arr(arr, 7);
  printf("\n");
  ft_sort_int_tab(arr, 7);
  print_arr(arr, 7);

  return 0;
}
