#include <stdio.h>
#include <math.h>
#include "../librerie/funzioni.h"

double f(double x, double T) {
return (pow(1/(1-x),2))*(exp(-4/T*(pow((x/(1-x)),-12)-pow((x/(1-x)),-6)))-1)*pow((x/(1-x)),2);
}

double g(double T){
return(-2*M_PI*simpson_par (pow(10,-6),0.999999,10000,T,f));
}

int main (){
int i;
double a,b,zero,massimo;

a=0.1;
b=50;

zero=bisezione(a,b,pow(10,-6),g);
printf("zero:%f\n",zero);

massimo=max(a,b,pow(10,-6),g);
printf("massimo:%f\n",massimo);
return(0);
}
