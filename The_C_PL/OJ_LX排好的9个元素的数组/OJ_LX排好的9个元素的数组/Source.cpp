#include<stdio.h>
int main() {
	int a[9], i;
	for (i = 0; i<9; i++) {
		scanf("%i", &a[i]);
	}
	int b[10];
	int N, j;
	scanf("%i", &N);
	for (i = 0,j=0;; i++) {
		while (a[i]<N) {
			b[j] = a[i];
		}
		b[j + 1] = N;
		b[j++] = a[i];
	}
	for (i = 0; i < 10; i++) {
		printf("%i ", b[i]);
	}
}