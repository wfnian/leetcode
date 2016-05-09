#include<stdio.h>
#define NUM 1888

int main() {
	int arra[NUM][NUM];
	int i, j;
	int N, M;
	while (scanf_s("%d %d", &N, &M) != EOF) {
		for (i = 0; i < N; i++)
			for (j = 0; j < M; j++)
				scanf_s("%d", &arra[i][j]);

		int  a2[NUM][NUM];
		for (i = 0; i < N; i++)
			for (j = 0; j < M; j++)
				a2[j][i] = arra[i][j];
		for (i = 0; i < M; i++) {
			for (j = 0; j < N; j++)
				printf("%d ", a2[i][j]);
			printf("\n");
		}
	}
	return 0;
}
