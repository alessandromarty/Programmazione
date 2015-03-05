#include<stdio.h>
#include <math.h>

double f(double x, double h) {
return((exp(-(x+h)*(x+h))-exp(-(x-h)*(x-h)))/(2*h));
}

double g(double x){
return(-2*x*exp(-x*x));
}

int main () {
int i=0,c=0;
double x,h,m,a,n;

n = pow(10,4);
m = 5.0/n;
h = m/2;

	while(c!=1){
		for(i=0; i<n; i++){
			c=1;
			a = (f(i*m,h)-g(i*m))/g(i*m);
				if(a<0)
					a=-a;
				if (a>pow(10,-5)) {
					h=h/2;
					i=n;		
					c=0;
					
				}
		}

	}

//printf("Il valore di dx entro cui è valida l'approssimazione è %.7f\n",h);
printf("Dammi il valore di x in cui calcolare la derivata:\n");
scanf("%lf",&x);

printf("Valore teorico:%.10f\n",g(x));
printf("Valore numerico:%.10f\n",f(x,h));


return 0;
}
