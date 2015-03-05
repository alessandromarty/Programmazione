#include <stdio.h>
#include <math.h>
#include "../librerie/funzioni.h"

//h=1

double g(double x, double E){
return(sqrt(2.0*(E-x*x/2.0)));
}


double f(double E , double n){
return((1.0/M_PI)*trapezio_par(-sqrt(1.9999*E),sqrt(1.9999*E),10000,E,g)-n-0.5);
}

int main () {
double E,a,b; 
int i=3;

	for (i=0;i<5;i++){
	a=0;
	b=100;
	printf("%.10f\n",bisezione_par(a,b,pow(10,-15),(double)i,f));
	
	}

//for(E=0;E<5;E=E+0.005)
//printf("%f,%f\n",E,f(E,i));
	
return(0);
}
