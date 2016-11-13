///*
//题目描述
//一个字符串A的子串被定义成从A中顺次选出若干个字符构成的串。如A=“cdaad" ,顺次选1，3，5个字符就构成子串" cad" ,现给定两个字符串，求它们的最长共公子串。
//输入
//第一行两个字符串用空格分开。
//输出
//最长子串的长度。
//样例输入
//abccd aecd
//样例输出
//3
//*/
//#include<stdio.h>
//#include<string.h>
//#include<malloc.h>
//
//int lcs(char *X, char *Y, int m, int n)
//{
//	int L[m + 1][n + 1];
//	int i, j;
//
//	/* Following steps build L[m+1][n+1] in bottom up fashion. Note
//	that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
//	for (i = 0; i <= m; i++)
//	{
//		for (j = 0; j <= n; j++)
//		{
//			if (i == 0 || j == 0)
//				L[i][j] = 0;
//
//			else if (X[i - 1] == Y[j - 1])
//				L[i][j] = L[i - 1][j - 1] + 1;
//
//			else
//				L[i][j] = maxm(L[i - 1][j], L[i][j - 1]);
//		}
//	}
//
//	/* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
//	return L[m][n];
//}
//int maxm(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//
////int LCSLLength(int m, int n, char *x, char *y) {
////	int i, j;
////	int c[5][5],b[5][5];
////	for (i = 1; i <= m; i++)c[i][0] = 0;
////	for (i = 1; i <= n; i++)c[0][i] = 0;
////	/*for (i = 0; i < m; i++) {
////		for (j = 0; j < n; j++) {
////			c[i][j] = 0;
////		}
////	}*/
////	for (i = 1; i <= m; i++)
////		for (j = 1; j <= n; j++) {
////			if (x[i] == y[j]) {
////				c[i][j] = c[i - 1][j - 1] + 1;
////				b[i][j] = 1;
////			}
////			else if (c[i - 1][j] >= c[i][j - 1]) {
////				c[i][j] = c[i - 1][j];
////				b[i][j] = 2;
////			}
////			else {
////				c[i][j] = c[i][j - 1];
////				b[i][j] = 3;
////			}
////		}
////	return c[m][n];
////}
////
////int main() {
////	int **b = (int**)malloc(20), **c = (int**)malloc(20);
////	int m = 5;
////	int n = 5;
////	printf("%d\n", LCSLLength(m, n, "abccd", "aecdu"));
////
////}
#include<stdio.h>
#include<string.h>
#include<malloc.h>
int LCSLLength(int m, int n, char *x, char *y) {
	int i, j;
	int c[m][n], b[m][n];
	for (i = 1; i <= m; i++)c[i][0] = 0;
	for (i = 1; i <= n; i++)c[0][i] = 0;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++) {
			if (x[i] == y[j]) {
				c[i][j] = c[i - 1][j - 1] + 1;
				b[i][j] = 1;
			}
			else if (c[i - 1][j] >= c[i][j - 1]) {
				c[i][j] = c[i - 1][j];
				b[i][j] = 2;
			}
			else {
				c[i][j] = c[i][j - 1];
				b[i][j] = 3;
			}
		}
	return c[m][n];
}

int main() {
	char *X = (char*)malloc(sizeof(char));
	char *Y = (char*)malloc(sizeof(char));
	while ((scanf("%s %s", X, Y)) != '\0') {
		int m = strlen(X);
		int n = strlen(Y);
		printf("%d\n", LCSLLength(m, n, X, Y));
	}

}