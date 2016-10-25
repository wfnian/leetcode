/*
设R=(1, 2, .., n)，计算R的全排列。 分治法求解全排列的算法思想： 设R=(1, 2, .., n)的全排列为P(R)， 若R=()，则P()=()； 否则，P(R)={(1)P(2, 3, .., n),(2)P(1, 3, .., n), (3)P(2, 1, .., n), .., (n)P(2, .., n-1, 1)}； 同样地，P(2, 3, .., n)={(2){3, 4, .., n}, (3){2, 4, .., n}, .., (n){3, .., n-1, 2}}
输入
输入为一组不大于7的整数。
输出
对每个输入的整数n，用分治法计算并输出1..n的全排列。
样例输入
1
2
3
样例输出
1
1 2
2 1
1 2 3
1 3 2
2 1 3
2 3 1
3 2 1
3 1 2
*/
#include<stdio.h>
#include<malloc.h>
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void perm(int list[],int k,int m) {
	if (k == m) {
		for (int i = 0; i <= m; i++) {
			printf("%d ", list[i]);
		}
		printf("\n");
	}
	else for (int i = k; i <= m; i++) {
		swap(&list[k],&list[i]);
		perm(list,k+1,m);
		swap(&list[k], &list[i]);
	}
}
int main() {
	int n;
	int *list = (int*)malloc(20000);
	//int list[] = { 1, 2,3,4,5 };
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n+2; i++) {
			list[i] = i+1;
		}
		//list[1] = { 1 ,2 };
		perm(list, 0, n-1);
	}
	return 0;
}