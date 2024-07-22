#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
    char* src;
    char* dest;
    char* result;
    
    src = malloc(sizeof(char*));
    dest = malloc(sizeof(char*));
    
    src = "W4y_to_g0";

    result = ft_strcpy(dest, src);

    printf("%s", result);

    return(0);
}
