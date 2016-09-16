/*#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("请输入abc",&a,&b,&c);
	printf("百位数字是%f\n",a);
	printf("十位数字是%f\n",b);
	printf("个位数字是%f\n",c);
	
}*/
#include <stdio.h>
main()
{
int n,a,b,c;
scanf("%d",&n);
a = n/ 100;
b = (n-a*100)/10;
c = n % 10;
printf("%d的各位分别是%d，%d，%d，其和为%d\n",n,a,b,c,a+b+c);
}
