#include<stdio.h>
#define NUM 100
int main() {
	int a[NUM], b[NUM];
	int i, j, k, n;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			int M1, N = 0;
			scanf("%d", &M1);
			for (j = 0; j < M1; j++) {
				scanf("%d", &a[j]);
			}
			for (j = 1; j < M1; j++) {
				for (k = 0; k < M1 - j; k++) {
					if (a[k] > a[k + 1]) {
						N = a[k];
						a[k] = a[k + 1];
						a[k + 1] = N;
					}
				}
			}
			for (k = 0; k < M1-1; k++) {
				printf("%d ", a[k]);
			}
			printf("%d", a[M1-1]);
			printf("\n");
		}
	}
}