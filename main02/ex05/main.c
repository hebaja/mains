#include <stdlib.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
  char* str;
  int size = 7;
  int result;

  str = malloc(sizeof(char*) * size);

  result = ft_str_is_uppercase(str);
  printf("No declaration -> %d\n", result);

  str = "sweet";
  result = ft_str_is_uppercase(str);
  printf("%s -> %d\n", str, result);

  str = "swe3t";
  result = ft_str_is_uppercase(str);
  printf("%s -> %d\n", str, result);

  str = "SWEET";
  result = ft_str_is_uppercase(str);
  printf("%s -> %d\n", str, result);

  str = "";
  result = ft_str_is_uppercase(str);
  printf("%s -> %d\n", str, result);

  return (0);
}
