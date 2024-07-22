#include <stdio.h>
#include <stdlib.h>

int ft_str_is_printable(char *str);

int main()
{
    char* str;
    int result;

    str = malloc(sizeof(char*));

    result = ft_str_is_printable(str);
    printf("no declaration -> %d\n", result);

    str = "SWEET";
    result = ft_str_is_printable(str);
    printf("SWEET -> %d\n", result);

    str = "Sweet";
    result = ft_str_is_printable(str);
    printf("Sweet -> %d\n", result);

    str = "";
    result = ft_str_is_printable(str);
    printf("empty -> %d\n", result);

    str = " ";
    result = ft_str_is_printable(str);
    printf("space -> %d\n", result);

    str = "backspace\b";
    result = ft_str_is_printable(str);
    printf("backspace -> %d\n", result);

    return (0);
}
