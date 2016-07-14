#include<stdio.h>
int main(){
	float t=1;
	float s=1,sum=1,n=1.0;
	while(n<100){
		sum=sum+t;
		n++;
		s=-s;
		t=(s*1.0)/(n);
		
	}
	printf("%f",sum);
}
