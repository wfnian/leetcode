/*
题目描述
堆排序是一种利用堆结构进行排序的方法，它只需要一个记录大小的辅助空间，
每个待排序的记录仅需要占用一个存储空间。
首先建立小根堆或大根堆，然后通过利用堆的性质即堆顶的元素是最小或最大
值，从而依次得出每一个元素的位置。
堆排序的算法可以描述如下：

在本题中，读入一串整数，将其使用以上描述的堆排序的方法从小到大排序，并输出。

输入
输入的第一行包含1个正整数n，表示共有n个整数需要参与排序。其中n不超过100000。
第二行包含n个用空格隔开的正整数，表示n个需要排序的整数。
输出
只有1行，包含n个整数，表示从小到大排序完毕的所有整数。 请在每个整数后输出
一个空格，并请注意行尾输出换行。
样例输入
10
2 8 4 6 1 10 7 3 5 9
样例输出
1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>
#define  MAXSIZE 20
typedef struct {
	int r[MAXSIZE];
	int length;
}SqList;

void swap(SqList*L, int i, int j) {
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void HeadAdjust(SqList *L, int s, int m) {
	int temp, j;
	temp = L->r[s];
	for (j = 2 * s; j <= m; j *= 2) {
		if (j < m&&L->r[j] < L->r[j + 1])
			++j;
		if (temp > L->r[j])
			break;
		L->r[s] = L->r[j];
		s = j;
	}
	L->r[s] = temp;
}

void HeapSort(SqList *L) {
	int i;
	for (i = L->length / 2; i > 0; i--) 
		HeadAdjust(L, i, L->length);
	for (i = L->length; i > 1; i--) {
		swap(L, 1, i);
		HeadAdjust(L, 1, i - 1);
	}
}

int main() {
	int len, elem;
	scanf("%d", &len);
	SqList L;
	L.length = len;
	for (int i = 1; i <= L.length; i++) {
		scanf("%d", &elem);
		L.r[i] = elem;
	}
	HeapSort(&L);
	for (int i = 1; i <= L.length; i++) {
		printf("%d ", L.r[i]);
	}
	printf("\n");
	return 0;
}