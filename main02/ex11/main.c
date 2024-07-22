#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main()
{
  char *str1;
  char *str2;

  str1 = "Oi\nvoce esçta bem, ca\tra? Eu es\rtou be\01m";
  str2 = "\x01-\x02-\x03-\x04-\x05-\x06-\x07-\x08-\x09-\x0A-\x0B-\x0C-\x0D-\x0E-\x0F-\x10-\x11-\x12-\x13-\x14-\x15-\x16-\x17-\x18-\x19-\x1A-\x1B-\x1C-\x1D-\x1E-\x1F";
  ft_putstr_non_printable(str1);
  printf("\n");
  ft_putstr_non_printable(str2);

  return (0);
}
