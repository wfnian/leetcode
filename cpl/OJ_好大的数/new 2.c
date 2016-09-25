/*
题目描述
快速排序是对起泡排序的一种改进。它的基本思想是，通过一趟排序将待排序的记
录分割成两个独立的部分，其中一部分记录的关键字均比另一部分的关键字小，在
分成两个部分之后则可以分别对这两个部分继续进行排序，从而使整个序列有序。
快速排序的算法可以描述如下：

在本题中，读入一串整数，将其使用以上描述的快速排序的方法从小到大排序，并输出。

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

int Partition(SqList *L, int low, int high) {
	int pivotkey;
	pivotkey = L->r[low];
	while (low < high) {
		while (low < high&&L->r[high] >= pivotkey)
			high--;
		swap(L, &low, &high);
		while (low < high&&L->r[low] <= pivotkey)
			low++;
		swap(L, &low, &high);
	}
	return low;
}

void QSort(SqList *L, int low, int high) {
	int pivot;
	if (low < high) {
		pivot = Partition(L, low, high);
		QSort(L, low, pivot - 1);
		QSort(L, pivot + 1, high);
	}
}

void QuickSort(SqList *L) {
	QSort(L, 1, L->length);
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
	QuickSort(&L);
	for (int i = 1; i <= L.length; i++) {
		printf("%d ", L.r[i]);
	}
	printf("\n");
	return 0;
}