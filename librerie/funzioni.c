#include"funzioni.h"
#include<math.h>

double trapezio (double a, double b, int n, double(*f)(double)) {
int i;
double sum = 0,h;
h = (b-a)/n;
	for (i=1; i<n; i++) {
	sum = sum + f(a+h*i);
	}
	
sum=h*sum+(f(a)+f(b))*h/2;

return sum;
}

double simpson (double a, double b, int n, double(*f)(double)) {
int i;
double sum_p=-f(a),sum_d=0,sum=0,h;
h = (b-a)/n;
	for(i=0; i<n; i=i+2) {
	sum_d += f(a+(i+1)*h);
	sum_p += f(a+i*h);
	}


		
sum=(f(a) + f(b) + 4*sum_d + 2*sum_p)*h/3;
return sum;
}


double trapezio_par (double a, double b, int n, double par, double(*f)(double,double)) {
int i;
double sum = 0,h;
h = (b-a)/n;
	for (i=1; i<n; i++) {
	sum = sum + f(a+h*i,par);
	}
	
sum=h*sum+(f(a,par)+f(b,par))*h/2;

return sum;
}

double simpson_par (double a, double b, int n, double par, double(*f)(double,double)) {
int i;
double sum_p=-f(a,par),sum_d=0,sum=0,h;
h = (b-a)/n;
	for(i=0; i<n; i=i+2) {
	sum_d += f(a+(i+1)*h,par);
	sum_p += f(a+i*h,par);
	}


		
sum=(f(a,par) + f(b,par) + 4*sum_d + 2*sum_p)*h/3;
return sum;
}



double bisezione (double a, double b, double err, double(*f)(double)) {
double x;
	while(fabs(b-a)>err) {
	x=(a+b)/2;
		if ((f(x)*f(a))>0) {
		a=x;
		b=b;
		}
		else {
		a=a;
		b=x;
		}
	}	
return x;
}


double max (double a, double b, double err, double(*f)(double)) {
double x,y;
	while(fabs(b-a)>err) {
	x=a+(b-a)*1/3;
	y=a+(b-a)*2/3;
		if (f(x)>f(y)) {
		a=a;
		b=y;
		}
		else {
		a=x;
		b=b;
		}
	}
	x=(a+b)/2;
return x;
}


double min (double a, double b, double err, double(*f)(double)) {
double x,y;
	while(fabs(b-a)>err) {
	x=a+(b-a)*1/3;
	y=a+(b-a)*2/3;
		if (-f(x)>-f(y)) {
		a=a;
		b=y;
		}
		else {
		a=x;
		b=b;
		}
	}
	x=(a+b)/2;
return x;
}





