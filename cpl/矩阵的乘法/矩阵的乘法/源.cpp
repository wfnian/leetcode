#include<stdio.h>
#define NUM 22
int main() {
	int a[NUM][NUM], b[NUM][NUM], c[NUM][NUM] = {0};
	int i, j, z;
	int a_i, a_j, b_i, b_j;
	while (scanf("%i %i", &a_i, &a_j) != EOF) {
		for (i = 0; i < a_i; i++) {
			for (j = 0; j < a_j; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		scanf("%i %i", &b_i, &b_j);
		for (i = 0; i < b_i; i++) {
			for (j = 0; j < b_j; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		for (i = 0; i < a_i; i++) 
			for (j = 0; j < a_j; j++) {
				c[i][j] = 0;
				for (z = 0; z < b_j; z++)
					c[i][j] += a[i][j] * b[j][z];
			}
		for (i = 0; i < a_i; i++) {
			for (j = 0; j < b_j; j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
}