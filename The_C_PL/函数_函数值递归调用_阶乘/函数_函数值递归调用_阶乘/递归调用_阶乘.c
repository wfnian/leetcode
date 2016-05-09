#include<stdio.h>
int main() {
	int a, b;
	scanf_s("%d", &a);
	int jc(int n);
	b = jc(a);
	printf("%d\n", b);

	return 0;

}
int jc(int n) {
	if (n <= 1)
		return 1;
	else return n*jc(n - 1);

}