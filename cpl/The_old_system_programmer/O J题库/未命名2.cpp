#include<stdio.h>
#define LEAP_TEAR(y)
int main()
{
	int a,y;
	scanf("%d",&a);
	y=a%4;
	if(y==0)
	 printf("L");
	else printf("N"); 
	return 0;
}
