#include<stdio.h>
//#include<stdlib.h>
#include<math.h>
int main()
{	double a,b,c,s,area;
	printf("请分别输入三边长a,b,c的值：");
	scanf("%lf %lf %lf",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
	s=1.0/2*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%7.2f b=%7.2f c=%7.2f\n",a,b,c);
	printf("s=%7.2f area=%2.8f\n",s,area);
//	printf("area is%f",area);
}
    else
	printf("这三条边不能构成三角形！\n");
//	system("pause");        
}
