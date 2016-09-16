#include<stdio.h>
int main() {
	int x, y, r, a, b;
	scanf("%d %d", &x, &y);
	a = x; b = y;
	while (y != 0) {
		r = x%y;
		x = y;
		y = r;
	}
	printf("%d %d\n", x, (a * b) / x);
}
