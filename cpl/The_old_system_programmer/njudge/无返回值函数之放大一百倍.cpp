#include<stdio.h>
#include<stdlib.h>
int summ(int m)
{
	int a;
	a=100*m;
	return a;
}
main()
{
	int b;
	int c;
	scanf("%d",&b);
	c=summ(b);
	printf("%d",c);
}
