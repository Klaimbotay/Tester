#include <stdio.h>

#include "quad.h"

int main()
{
    printf("Hello World!\n");
    double a=0, b=0, c=0;
    printf("ax^2+bx+c=0\nWrite a b and c: ");
    quad(a, b, c);
    return 0;
}
