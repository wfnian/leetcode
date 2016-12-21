/*
73. Set Matrix Zeroes
Given matrix m x n matrix, if an element is 0, set its
entire row and column to 0. Do it in place.
*/
#include<stdio.h>
#include<malloc.h>
int matrix[100][100];
void setZeroes(int matrix[200][200], int matrixRowSize, int matrixColSize) {
	int row[10], col[10];
	int i, j, k, l, m = 0, n = 0;
	for (i = 0; i < matrixRowSize; i++)
		for (j = 0; j < matrixColSize; j++) {
			if (matrix[i][j] == 0) {
				row[m] = i;
				m++;
				col[n] = j;
				n++;
			}
		}
	for (l = 0; l < m; l++) 
		for (k = 0; k < n; k++) 
			for (i = 0; i < matrixRowSize; i++) 
				for (j = 0; j < matrixColSize; j++) {
					matrix[row[l]][j] = 0;
					matrix[i][col[k]] = 0;
				}
}
int main() {
	while (1) {
		int row[100], col[100];
		int i, j, k, l, m = 0, n = 0;
		int matrixRowSize, matrixColSize;
		scanf("%d %d", &matrixRowSize, &matrixColSize);
		for (i = 0; i < matrixRowSize; i++)
			for (j = 0; j < matrixColSize; j++) {
				scanf("%d", &matrix[i][j]);
				/*if (matrix[i][j] == 0) {
					row[m] = i;
					m++;
					col[n] = j;
					n++;
				}*/
			}
		/*for (l = 0; l < m; l++) 
			for (k = 0; k < n; k++) 
				for (i = 0; i < matrixRowSize; i++) 
					for (j = 0; j < matrixColSize; j++) {
						matrix[row[l]][j] = 0;
						matrix[i][col[k]] = 0; 
					}*/
		setZeroes(matrix,matrixRowSize, matrixColSize);
		for (i = 0; i < matrixRowSize; i++) {
			for (j = 0; j < matrixColSize; j++) {
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
/*
5 4
1 2 3 4
1 2 3 4
1 0 1 1
1 1 0 1
1 1 1 1
6 6
1 2 3 4 5 6
1 2 3 4 5 6
1 0 1 1 1 1
1 1 1 0 1 1
1 2 3 4 5 6
1 2 3 4 5 6
6 3
1 2 3
2 0 1
3 1 1
4 1 1
5 1 1 
6 1 1
*/