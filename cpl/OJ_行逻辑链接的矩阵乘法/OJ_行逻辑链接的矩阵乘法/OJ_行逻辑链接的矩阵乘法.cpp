#include "stdafx.h"
#include<stdio.h>
#define NUM 222
int main()
{
	int arra_1[NUM][NUM], arra_2[NUM][NUM], arra_3[NUM][NUM];
	int ar_1_i, ar_1_j, ar_2_i, ar_2_j;
	int i, j;
	while (scanf_s("%d %d", &ar_1_i, &ar_1_j) != EOF) {
		for (i = 0; i < ar_1_i; i++) {
			for (j = 0; j < ar_1_j; j++) {
				scanf_s("%d", &arra_1[i][j]);
			}
		}
		scanf_s("%d %d", &ar_2_i, &ar_2_j);
		for (i = 0; i < ar_2_i; i++) {
			for (j = 0; j < ar_2_j; j++) {
				scanf_s("%d", &arra_2[i][j]);
			}
		}
		/*for (i = 0; i < ar_1_i; i++) {
			for (j = 0; j < ar_2_j; j++) {
				arra_3[i][j] = arra_1[i][j] * arra_2[j][i];
			}
		}*/
		for (i = 0; i < ar_1_i; i++) {
			for (j = 0; j < ar_2_j; j++) {
				printf("%d ", arra_3);
			}
			printf("\n");
		}
	}

    return 0;
}

