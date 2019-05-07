#include <stdio.h>

#include "quad.h"

int main()
{
    printf("Hello World!\n");
    double a, b, c;
    printf("ax^2+bx+c=0\nWrite a b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    quad(a, b, c);
    return 0;
}
