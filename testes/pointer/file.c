#include <stdio.h>

int main()
{
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("%p", &a);
    printf("\n");
    printf("%p", b);
    printf("\n");
    printf("%p", c);
    printf("\n");
    printf("%p", d);


}