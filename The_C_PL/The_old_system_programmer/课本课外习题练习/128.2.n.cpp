#include<stdio.h>
int main(){
	int a,b,*pa,*pb,*pt;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	pa=&a;
	pb=&b;
	pt=pa;
	pa=pb;
	pb=pt;
	printf("%d %d\n",*pa,*pb);
}
