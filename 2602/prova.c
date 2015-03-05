#include <stdio.h>
#include <math.h>
#include "librerie/integrali.h"


double f(double x, double par) {
return (par*pow(x,2));
}

int main () {
double a;
a=trapezio_par (0,1,1000,3,f);
printf("%f\n",a);
return 0;
}
