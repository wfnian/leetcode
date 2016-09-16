#include<stdio.h>
#include<stdlib.h>
int mmm(int x){
	int y;
	y=x+1;
	return y;
}
main(){
	int a;
	int b;
	scanf("%d",&a);
	b=mmm(a);
	printf("%d",b);
}
