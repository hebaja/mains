#include <stdlib.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
  char* str;
  int result;

  str = malloc(sizeof(char*));

  result = ft_str_is_alpha(str);
  printf("no declaration -> %s\n", str);

  str = "Sweet";
  result = ft_str_is_alpha(str);
  printf("%s -> %d\n", str, result);

  str = "Swe3t";
  result = ft_str_is_alpha(str);
  printf("%s -> %d\n", str, result);

  str = "";
  result = ft_str_is_alpha(str);
  printf("Empty -> %d\n", result);

  return (0);
}
