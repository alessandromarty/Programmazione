#include<stdio.h>
#include<math.h>
#include"../librerie/funzioni.h"

double p (double x,double par){
return(par);
}


int main () {

double a,b,m,h,par,sum,v,err,j, value;
int i,n;
a=0;
b=1;

n=pow(10,5);
h=(b-a)/n;


sum=h;
err=0.01;
double y[n];
y[0]=0;
y[1]=1;
y[n]=-1;

j=10;
v=j;
double par[j];
for(i=0;i<=j;i++)
par[i]=0.01+0.01*i;

for(j=0;j<=v;j++){
		value=y[n];
		for(i=2;i<=n;i++){
			y[i]=((2-5*h*h*p(h*(i-1),par[j])/6)*y[i-1]-(1+h*h*p(h*(i-2),par[j])/12)*y[i-2])/(1+h*h*p(h*i,par[j])/12);
			sum += y[i]*y[i]*h;
			

//	for(i=0;i<=n;i++){
//		m=a+h*i;
//		printf("%.5f,%.5f\n",m,y[i]/sqrt(sum));
//	}
		}
		if(value*y[n]<0){	
			par=par[j-1];
			while(fabs(value-y[n])>0) {
				value=y[n];
					for(i=2;i<=n;i++){
					y[i]=((2-5*h*h*p(h*(i-1),par)/6)*y[i-1]-(1+h*h*p(h*(i-2),par)/12)*y[i-2])/(1+h*h*p(h*i,par)/12);
					}
				
		
			}
		
		}
	
	

}


return 0;
}
