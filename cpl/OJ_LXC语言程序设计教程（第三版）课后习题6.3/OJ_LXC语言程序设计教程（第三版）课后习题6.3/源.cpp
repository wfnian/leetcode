#include<stdio.h>
int main() {
	int a = 0, b=0, c=0, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		b = b * 10 + 2;//2,22,222
		a += b;//2,24,
		//c = c + a;//2,
	}
	printf("%d", a);
	return 0;
}