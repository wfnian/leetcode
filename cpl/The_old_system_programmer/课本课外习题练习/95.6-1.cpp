#include<stdio.h>
#include<stdlib.h>
int sumxy(int x,int y){
		int sum;
		sum=x+y;
		return sum;
	} 
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int m;
	m=sumxy(a,b);
	printf("%d",m);
}

