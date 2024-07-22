#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
  char str[15] = "I am but FLESH";
  char* result;

  printf("%s\n", str);
  result = ft_strcapitalize(str);
  printf("%s\n", result);

  char str2[56] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
  printf("%s\n", str2);
  result = ft_strcapitalize(str2);
  printf("%s\n", result);

  char str3[29] = "close the DoOr / DOor / D0Or";
  printf("%s\n", str3);
  result = ft_strcapitalize(str3);
  printf("%s\n", result);

  return(0);  
}
