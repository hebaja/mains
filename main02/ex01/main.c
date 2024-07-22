#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
  char* src;
  char* dest;
  char* result;
  unsigned int size10 = 10;
  unsigned int size50 = 50;
  src = malloc(sizeof(char*));
  dest = malloc(sizeof(char*));
  src = "A cute cat is climbing the christmas tree.";
  result = ft_strncpy(dest, src, size10);
  printf("%s\n", result);
  result = ft_strncpy(dest, src, size50);
  printf("%s\n", result);

  return (0);
}
