#include<stdio.h>
int sub(int x,int y){
	return x-y;
}
int add(int x,int y){
	return x+y;
}
int main(){
	int a;
	int b;
	int j;
	scanf("%d %d",&a,&b);
	int (*p)(int,int);
	p=add;
	j=(*p)(a,b);
	printf("%3d\n",j);
	p=sub;
	j=(*p)(a,b);
	printf("%3d\n",j); 
}
