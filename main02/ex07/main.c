#include <stdlib.h>
#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
  char str[5] = "frUta";
  char* result;
  result = malloc(sizeof(char*));

  printf("%s\n", str);
  result = ft_strupcase(str);
  printf("%s\n", result);

  return(0);
}
