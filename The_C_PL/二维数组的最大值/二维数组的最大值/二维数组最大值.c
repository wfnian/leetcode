#include<stdio.h>
int main() {
	int a[3][4], i, j, m, n;
	int max = a[0][0];
	printf("Please input 12 numbers:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (a[i][j]>max) {
				max = a[i][j];
				m = i;
				n = j;
			}
		}
	}
	printf("MAX=%d %d %d\n", max, m+1, n+1);

	return 0;
}