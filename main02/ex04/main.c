#include <stdlib.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
  char* str;
  int result;

  str = malloc(sizeof(char*) * 6);

  result = ft_str_is_lowercase(str);
  printf("No declaration -> %d\n", result);

  str = "sweet";
  result = ft_str_is_lowercase(str);
  printf("%s -> %d\n", str, result);

  str = "swe3t";
  result = ft_str_is_lowercase(str);
  printf("%s -> %d\n", str, result);

  str = "Sweet";
  result = ft_str_is_lowercase(str);
  printf("%s -> %d\n", str, result);

  str = "";
  result = ft_str_is_lowercase(str);
  printf("%s -> %d\n", str, result);

  return (0);
}

