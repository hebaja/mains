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

    str = "Oi\n. td bem?";
    result = ft_str_is_printable(str);
    printf("new line -> %d\n", result);

    str = "td bem, ca\tra?"; 
    result = ft_str_is_printable(str);
    printf("tab -> %d\n", result);

    str = "Eu es\rtou";
    result = ft_str_is_printable(str);
    printf("return -> %d\n", result);

    str = "E vc? td be\01m?";
    result = ft_str_is_printable(str);
    printf("start heading -> %d\n", result);

    return (0);
}
