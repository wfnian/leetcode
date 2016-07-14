#include <stdio.h>
#define PI 3.14159
int main()
{
	float r, V, S;
	printf("输入球体半径:");
	scanf("%f", &r);
	V = PI * 4 * r*r*r / 3;
	S = PI * 4 * r*r;
	printf("球体体积为%f", V);
	printf("球体表面积为%f", S);
}
