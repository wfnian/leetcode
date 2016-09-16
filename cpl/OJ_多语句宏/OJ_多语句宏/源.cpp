#include <stdio.h>
#define swap(a,b,t) t=a;a=b;b=t;
int main() {
	int a, b, t;
	int s, d;
	while (scanf("%d%d", &a, &b) != EOF) {
		s = a; d = b;
		if (a % 2 == b % 2) {
			swap(a, b, t);
			printf("%d %d\n", a, b);
		}
		else printf("%d %d\n", s, d);
	}


	return 0;
}