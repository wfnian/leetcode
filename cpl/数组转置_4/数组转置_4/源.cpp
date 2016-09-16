/*输入
输入的第一行是两个整数r和c（r*c <= 12500），分别表示一个
包含很多0的稀疏矩阵的行数和列数。接下来有r行，每行有c个整数，
表示这个稀疏矩阵的各个元素。
输出
输出c行，每行有r个整数，每个整数后跟一个空格。该结果为输入
稀疏矩阵的转置矩阵。
样例输入
6 7
0 12 9 0 0 0 0
0 0 0 0 0 0 0
-3 0 0 0 0 14 0
0 0 24 0 0 0 0
0 18 0 0 0 0 0
15 0 0 -7 0 0 0

样例输出

0 0 -3 0 0 15 
12 0 0 0 18 0 
9 0 0 24 0 0 
0 0 0 0 0 -7 
0 0 0 0 0 0 
0 0 14 0 0 0 
0 0 0 0 0 0 */#include<stdio.h>
#define NN 120
int main() {	int arra[NN][NN], a2[NN][NN];	int M, N;	while (scanf("%d %d", &M, &N) != EOF) {		int i, j;		for (i = 0; i < M; i++)			for (j = 0; j < N; j++)				scanf("%d", &arra[i][j]);		for (i = 0; i < M; i++){			for (j = 0; j < N; j++) {				a2[j][i] = arra[i][j];			}		}		for (i = 0; i < N; i++){			for (j = 0; j < M; j++) {				printf("%d ", a2[i][j]);			}			printf("\n");		}
	}
	return 0;
}
