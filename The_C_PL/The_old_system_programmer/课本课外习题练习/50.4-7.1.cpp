#include<stdio.h>
int main(){
	float a,b,c,i,pi,t=1,n=1.0,s=1;
	do{
		pi=pi+t;
		n=n+2;
		s=-s;
		t=s*1.0/n;
		
	}while(t>0.000001||t<(-0.000001));
	pi=pi*4;
	printf("%f",pi);
}
