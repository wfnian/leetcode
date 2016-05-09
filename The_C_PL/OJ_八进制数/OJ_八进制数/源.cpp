#include<stdio.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		printf("%o\n", a);
	}
}