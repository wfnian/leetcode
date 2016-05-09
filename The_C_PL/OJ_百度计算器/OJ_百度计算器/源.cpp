#include<stdio.h>
int main() {
	int a, b;
	while (scanf("%d %d",&a,&b) != EOF) {
		if (a >= 0 && a <= 10 && b >= 0 && b <= 10) {
			printf("%d\n", a + b);
		}
	}

	return 0;
}