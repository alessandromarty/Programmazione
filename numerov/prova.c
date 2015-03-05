#include<stdio.h>

double f (double x, int n){
double a[n];
int i;
a[0]=1;
for(i=1;i<=n;i++)
a[i]=a[i-1]+x;
return(*a);
}

int main() {
int n=5,i;
double a[n];
*a=f(2,n);
for(i=0;i<n+1;i++)
printf("%f\n",a[i]);
return(0);
}
