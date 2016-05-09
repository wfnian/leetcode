/*有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数，
写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。
输入
输入数据的个数n n个整数 移动的位置m
输出
移动后的n个数
样例输入
10
1 2 3 4 5 6 7 8 9 10
2
样例输出
9 10 1 2 3 4 5 6 7 8 */
#include<stdio.h>
int main() {
	int a[22], N, i, j, Poist, b[22];
	while (scanf("%d", &N)!=EOF) {
		//scanf("%d", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &Poist);
		for (i = N - Poist, j = 0; i < N; i++, j++) {
			b[j] = a[i];
		}
		for (i = 0, j = Poist; j < N; i++, j++) {
			b[j] = a[i];
		}
		for (i = N - Poist, j = 0; i < Poist; i++, j++) {
			b[j] = a[i];
		}
		b[N] = NULL;
		for (i = 0; i < N; i++) {
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}