#include<stdio.h>
#include<math.h>
#include"../librerie/funzioni.h"

double f(double x) {
return(-x*x+x);
}

int main () {
double a=-5,b=5,err=pow(10,-5);

printf("%.7f\n",max (a,b,err,f));
return 0;
}
