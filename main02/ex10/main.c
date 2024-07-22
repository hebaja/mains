#include <stdlib.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
  char src[11] = "Lovely day!";
  char* dest;
  dest = malloc(sizeof(char*));
  printf("%s\n",src); 
  ft_strlcpy(dest, src, 9);
  printf("%s\n",dest); 

  return (0);
}
