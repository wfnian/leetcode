#include<stdio.h>
int main(){
	int a,b,c,d,n;
	scanf("%d",&n);
		a=n%10;
		b=(n/10)%10;
		c=(n/100)%10;
		d=(n/1000);
		printf("%d %d %d %d",d,c,b,a);
	return 0;
} 
