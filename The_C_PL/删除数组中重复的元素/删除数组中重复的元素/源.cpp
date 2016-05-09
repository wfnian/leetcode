#include<stdio.h>
int main() {
	int a[60000], i, j;
	int M = 0, N;
	while (~scanf("%d", &N)) {
		if (N == 0) {
			printf("list is empty\n");
			break;
		}
		for (i = 0; i < N; i++) {
			scanf_s("%d", &a[i]);
		}
		for (i = 0, j = 0; i < N; i++) {
			if (a[i] != a[i + 1]) {
				a[j++] = a[i];
			}
			else {
				M++;
			}
		}
		for (j = 0; j < N - M; j++) {
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;

}