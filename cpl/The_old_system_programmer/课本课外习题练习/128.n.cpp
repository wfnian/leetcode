#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	int *pa,*pb;
	pa=&a;
	pb=&b;
	int y;
	y=*pa;*pa=*pb;*pb=y;
	printf("%d %d\n",*pa,*pb); 
}
