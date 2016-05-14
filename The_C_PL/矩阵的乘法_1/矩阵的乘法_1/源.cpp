#include<stdio.h>
#define NUM 44

int main() {
	int a[NUM][NUM], b[NUM][NUM], c[NUM][NUM];
	int M, N, P, Q;
	while (scanf("%d %d", &M, &N) != EOF) {
		int i, j, k;
		for (i = 0; i < M; i++) {
			for (j = 0; j < N; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		scanf("%d %d", &P, &Q);
		for (i = 0; i < P; i++) {
			for (j = 0; j < Q; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < Q; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < N; k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for (i = 0; i < M; i++) {
			for (j = 0; j < Q; j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
}