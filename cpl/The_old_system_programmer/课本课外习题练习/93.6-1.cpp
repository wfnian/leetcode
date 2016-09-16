#include<stdio.h>
#include<stdlib.h>
int sumxy(int x,int y){
	int s;
	s=x+y;
	return s;	
}
int main(){
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum=sumxy(a,b);
	printf("%d",sum);
}
