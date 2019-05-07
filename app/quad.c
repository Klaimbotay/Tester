#include <math.h>
#include <stdio.h>
#include "quad.h"

int quad(double a, double b, double c){
   double discr;
   discr = pow(b, 2) - 4 * a * c;
   if (discr == 0.0) {
       printf("1 корень:\n%fl\n", (-1) * b / (2 * a));
       return 1;
   }
   else if (discr < 0.0) {
       printf("Нет корней\n");
       return 0;
   }
   else{
       printf("2 корня:\n%fl\n%fl\n", ((-1) * b + pow(discr, 0.5)) / (2 * a), ((-1) * b - pow(discr, 0.5)) / (2 * a));
       return 2;
   }
}
