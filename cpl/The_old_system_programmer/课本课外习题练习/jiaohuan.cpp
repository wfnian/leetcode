#include<stdio.h>
int main(){
	int a,b;
	int man(int *pa,int *pb);
	scanf("%d %d",&a,&b);
	man(&a,&b);
	printf("%d %d",a,b);
}
int man(int *pa,int *pb){
	int t;
	t=*pa;
	*pa=*pb;
	*pb=t;
}
 
