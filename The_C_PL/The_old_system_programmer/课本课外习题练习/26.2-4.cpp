#include<stdio.h>
//#include<stdlib.h>
#include<math.h>
int main()
{
	double a,b,c,s,area;
	printf("请输入三角形三条边的边长a,b,c:" );
	scanf("%lf %lf %lf",&a,&b,&c);
	s=1.0/2*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%7.2f,b=%7.2f,c=%7.2f\n",a,b,c);
	printf("s=%7.2f,area=%7.4f\n",s,area);
//	system("pause");
}
