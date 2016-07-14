#include<stdio.h>
#include<stdlib.h>

int main(){
	float a=1.0,b=0,c=1,d=1;
	do{
		b=b+d;
		a=a+2;
		c=-c;
		d=1.0*c/a;
	}while(d<(-0.000001)||d>0.000001);
	printf("%f",4*b);
} 
