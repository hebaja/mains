#include <stdio.h> 

int ft_strlen(char *str);

int main()
{
  char str[6] = {'B', 'e', 'L', '3', 'z', '4'};
  int result = ft_strlen(str);
  printf("%d", result);

  return (0);
}
