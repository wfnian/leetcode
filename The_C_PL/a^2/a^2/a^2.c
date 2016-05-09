#include"stdio.h"
#include"math.h"
void main() {
	int a,b;
	float c;
	printf("Please input a number!\n");
	scanf("%d", &a);
	b = a * a;
	c = sqrt(a);
	printf("a^2=%d\nsqrt a=%f\n", b, c);

	return 0;

}