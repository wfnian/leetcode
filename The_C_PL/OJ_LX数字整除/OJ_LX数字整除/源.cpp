#include<stdio.h>
int main() {
	long long  a;
	while (scanf("%d", &a) != EOF) {
		if (a == 0)break;
		else if (a % 17 == 0) {
			printf("1\n");
		}
		else printf("0\n");
	}
}