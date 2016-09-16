#include<stdio.h>
int main(){
	int m,n;
	float c,d,e,f;
	scanf("%f %f",&m,&n);
/*	float mmm(float m,float n,float sum,float diff,float product,float divide);
	mmm(m,n,c,d,e,f);
	printf("%f %f %f %f ",c,d,e,f);*/
	int m(int a,int b);
    c=m(a,b);
	printf("%f ",c);
}
/*float mmm(float a,float b,float sum,float diff,float product,float divide){
	sum=a+b;
	diff=a-b;
	product=a*b;
	divide=a/b;
//	return sum,diff,product,divide;
}*/
int m(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}
