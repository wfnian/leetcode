#include<stdio.h>
int sub(int x,int y){
	return (x-y);
}
int add(int x,int y){
	return (x+y);
}
int main(){
	int a,b,j;
	int (*p)(int,int);
		scanf("%d %d",&a,&b);
			printf("%d %d\n",a,b);
		p=add;
		j=(*p)(a,b);
			printf("add=%d\n",j);
	p=sub;
	a=-7;
	b=4;
	j=(*p)(a,b);
			printf("SUB=%d\n",j);
}
