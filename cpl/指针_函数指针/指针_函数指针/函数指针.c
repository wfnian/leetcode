#include<stdio.h>
int sum(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	int(*p)(int,int);
	p = sum;
	c = (*p)(a, b);
	p = sub;
	d = (*p)(a, b);
	printf("%d %d", c, d);

	return 0;

}