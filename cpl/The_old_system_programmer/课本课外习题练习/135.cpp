#include<stdio.h>
int ma(int*x,int*y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	ma(&a,&b);
	printf("%d %d\n",a,b);
}
