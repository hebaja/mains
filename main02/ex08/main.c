#include <stdlib.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
  char str[5] = "FrUta";
  char* result;
  result = malloc(sizeof(char*));

  printf("%s\n", str);
  result = ft_strlowcase(str);
  printf("%s\n",result);

  return(0);
}
