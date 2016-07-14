#include<stdio.h>
int main(int n,char*str[]){
	printf("%d\n",n);
	while(--n>=0)
	puts(*str++);
} 
