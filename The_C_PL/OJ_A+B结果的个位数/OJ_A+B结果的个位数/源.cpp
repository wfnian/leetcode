#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	c = abs(a + b);
	d = c % 10;
	printf("%d\n", d);
}