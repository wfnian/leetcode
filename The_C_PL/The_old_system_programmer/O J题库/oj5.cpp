#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	float r,h,C1,Sa,Va,Sb,Vb;
	scanf("%f %f",&r,&h);
	C1=2*PI*r;
	Sa=PI*r*r;
	Va=4.0/3*PI*r*r*r; 
	Vb=PI*r*r*h;
	Sb=4*PI*r*r;
	printf("C1=%7.2f\nSa=%7.2f\nSb=%7.2f\nVa=%7.2f\nVb=%7.2f\n",C1,Sa,Sb,Va,Vb);
	return 0;
}
