#include <stdio.h>

void point(int *********a)
{
    int ********b = *a;
    int *******c = *b;
    int ******d = *c;
    int *****e = *d;
    int ****f = *e;
    int ***g = *f;
    int **h = *g;
    int *i = *h;
    *i = 42;
    printf("%d\n", *i);
}

int main()
{
    int a = 42;
    int* b = &a;
    int** c = &b;
    int*** d = &c;
    int**** e = &d;
    int***** f = &e;
    int****** g = &f;
    int******* h  = &g;
    int******** i  = &h;
    int********* j  = &i;

     point(j);
}