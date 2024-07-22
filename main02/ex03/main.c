#include <stdlib.h>
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
  char* str;
  int result;

  str = malloc(sizeof(char*));

  result = ft_str_is_numeric(str);
  printf("No declaration -> %d\n", result);

  str = "1234";
  result = ft_str_is_numeric(str);
  printf("%s -> %d\n", str, result);

  str = "123A";
  result = ft_str_is_numeric(str);
  printf("%s -> %d\n", str, result);

  str = "i234";
  result = ft_str_is_numeric(str);
  printf("%s -> %d\n", str, result);

  str = "";
  result = ft_str_is_numeric(str);
  printf("%s -> %d\n", str, result);

  return (0);
}
