#include <stdio.h>
#include <math.h>
#include "../librerie/funzioni.h"

//devo moltiplicare B(T) per sigma^3!!

double f(double x, double T) {
return (pow(x/(1-x),2))*(exp(-4/T*(pow((x/(1-x)),-12)-pow((x/(1-x)),-6)))-1)/(pow((1-x*x),1));
//return (pow(x,2)*(exp(-(4/T)*(pow(x,-12)-pow(x,-6)))-1));
//return((exp(-(4/T)*(pow(x,-12)-pow(x,-6)))-1));
}

int main () {
double B,T;
	for(T=1; T<50; T=T+0.1) {
		B=-2*M_PI*simpson_par (pow(10,-6),0.999999,10000,T,f);
		printf("%.7f,%.7f\n",T,B);	
	}
return 0;
}
