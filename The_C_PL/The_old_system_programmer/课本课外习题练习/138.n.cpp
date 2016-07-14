#include<stdio.h>
int sub(int x,int y){
	return x-y;
} 
int add(int x,int y){
	return x+y;
}
int main(){
	int a=3,b=4,i,j;
	int(*p)(int ,int);
/*	int sub(int x,int y);
	int add(int x,int y);*/
	p=add;
	j=(*p)(a,b);
	p=sub;
	i=(*p)(a,b);
	printf("%d %d",i,j);
	return 0;
}

