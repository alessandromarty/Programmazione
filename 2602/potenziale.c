#include <stdio.h>
#include <math.h>
#include "../librerie/funzioni.h"


double f(double x) {
return (2*(x*x)/sqrt(2*M_PI)*exp(-0.5*x*x));
}

double g(double x) {
return(trapezio (0,x,500,f)/(4*M_PI*x*x));
}

int main () {
double a,x,e,v,n,c;
	for(x=10; x > 0; x -= 0.01){
		a=-trapezio (10,x,500,g);
		printf("%f,%f\n",x,a);
	}
return 0;
}
