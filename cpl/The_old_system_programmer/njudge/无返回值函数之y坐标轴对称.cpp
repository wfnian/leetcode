#include<stdio.h>
#include<stdlib.h>
int duicheng(int x){
	int x1;
	x1=-x;
	return x1;	
} 
main(){
	int a,b;
	int c,d;
	scanf("%d %d",&a,&b);
	c=duicheng(a);
	d=b;
	printf("(%d,%d)",c,d);
}
