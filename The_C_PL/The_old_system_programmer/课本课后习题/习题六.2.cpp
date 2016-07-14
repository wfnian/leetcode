#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int man(int q);

	return 0;
}
int man(int q)
{
	int b,c,d;
	b=q/100;
	c=q/10%10;
	d=q%10;
	if(q==b*b*b+c*c*c+d*d*d)
		printf("shi");
}
