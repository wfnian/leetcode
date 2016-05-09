#include<stdio.h>
int main() {
	int jh(int *x, int *y);
	int a, b;
	scanf("%d %d", &a, &b);
	jh(&a, &b);
	printf("%d %d", a, b);
}
int jh(int *x, int *y) {
	int z;
	z = *x; *x = *y; *y = z;
}