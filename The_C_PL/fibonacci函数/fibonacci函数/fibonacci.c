#include<stdio.h>
int main() {
	int a[36], i;
	a[0] = 1, a[1] = 1;
	for (i = 2; i < 20; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	for (i =0; i <20; i++) {
		if (i % 5 == 0) {
			printf("\n");
		}
		printf("%6d ", a[i]);
	}

	return 0;

}