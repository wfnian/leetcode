#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	double s=1.;
	for(i=1;i<=n;i++){
		s=s*(((2.*i)*(2.*i))/((2.*i-1.)*(2.*i+1.)));
	} 
	printf("%lf\n",2*s);
} 
