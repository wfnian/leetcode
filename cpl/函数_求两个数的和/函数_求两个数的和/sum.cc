#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	int sum(int x, int y);
	c = sum(a, b);
	printf("%d\n", c);

	return 0;

}
int sum(int x,int y) {
	return x + y;

}