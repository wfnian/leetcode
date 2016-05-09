#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	//int i;
	int sum = 0;
	int j = 10;
	while (sum >= 1) {
		sum = a % j;
		j *= 10;
		printf("%d,",sum);
	}
}