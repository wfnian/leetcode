#include<stdio.h>
//int main() {
//	int a[10000] = { 0 }, i, n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		a[i] = a[i - 1] + i;
//	}
//	printf("%d\n", a[n]);
//
//	return 0;
//
//}
int main() {
	int a, b;
	scanf("%d", &a);
	int digui(int x);
	b=digui(a);
	printf("%d\n", b);
}
int digui(int x) {
	if (x <= 0)
		return 0;
	else return digui(x - 1) + x;
}