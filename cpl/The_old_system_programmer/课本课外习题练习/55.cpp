#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int  j;
	int c;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			c=i*j;
		printf("%2dx%d=%2d ",i,j,c);
		//printf("*");
		}
		printf("\n");
	}
} 
