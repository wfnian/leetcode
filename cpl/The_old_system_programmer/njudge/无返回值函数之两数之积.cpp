#include<stdio.h>
#include<stdlib.h>
int nnn(int x,int y){
	int j;
	j=x*y;
	return j;
}
main (){
	int a,b;
	int c;
	scanf("%d %d",&a,&b);
	c=nnn(a,b);
	printf("%d",c);
	return 0; 
}
