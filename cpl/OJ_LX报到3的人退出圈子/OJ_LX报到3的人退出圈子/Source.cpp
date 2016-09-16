/*
有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），
凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
输入
初始人数n
输出
最后一人的初始编号
样例输入
3
样例输出
2
*/
#include<stdio.h>
int main() {
	int a[222], b[222], i, j;
	int N, M = 0;
	while (scanf("%i", &N) != EOF) {
		while (N <= 1) {
			for (i = 3; i < N - 1; i++) {
				a[i] = a[i++];
			}
			M = i;
		}
		printf("%d\n", M);
	}
}