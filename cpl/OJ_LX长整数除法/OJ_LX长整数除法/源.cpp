#include<stdio.h>
int main() {
	long long a, b, x, y;
	while (scanf("%d %d", &a, &b) != EOF) {
		x = a / b;
		y = a%b;
		printf("%d %d\n", x, y);
	}

	return 0;

}