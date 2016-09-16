#include<stdio.h>
int main() {
	int a, b, c;
	printf("Please input two number:\n");
	scanf("%d %d", &a, &b);
	while (b != 0) {
		c = a%b; 
		a = b;
		b = c;
	}
	printf("The greatest common divisor is %d\n", a);

	return 0;

}