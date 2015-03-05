#include <stdio.h>
#include <math.h>
#include "../librerie/funzioni.h"


double f(double x) {
return (2*(x*x)/sqrt(2*M_PI)*exp(-0.5*x*x));
}

int main () {
double a,x,e,v,n,c;
	for(x=0; x<20; x += 0.1){
		a=trapezio (0,x,10000,f);
		e=a/(4*M_PI*x*x);
		printf("%f,%f,%f\n",x,a,e);
	}
return 0;
}
