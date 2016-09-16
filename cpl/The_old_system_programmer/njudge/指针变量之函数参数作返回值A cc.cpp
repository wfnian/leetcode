#include<stdlib.h>
#include<stdio.h>
int main(){
	int a,b;
	int i,j,k;
	int *pa;
	int*pb;
	pa=&a;
	pb=&b;
	float l;
	void fun(int a, int b, int *sum, int *diff, int *product, float *divide);
	fun(pa,pb,i,j,k,l);
	printf("%d %d %d %f",i,j,k,l);
}
void fun(int a, int b, int *sum, int *diff, int *product, float *divide){
	*sum=a+b;
	*diff=a-b;
	*product=a*b;
	*divide=a/b;
}

