/*
题目描述
直接插入排序是一种最简单的排序方法，它的基本操作是将一个记录插入
到已经排好序的有序表中，从而得到一个新的且记录数增加了1的有序表。
其算法可以描述如下：
在本题中，读入一串整数，将其使用以上描述的直接插入排序的方法从小
到大排序，并输出。
输入
输入的第一行包含1个正整数n，表示共有n个整数需要参与排序。其中n不
超过1000。 第二行包含n个用空格隔开的正整数，表示n个需要排序的整数。
输出
只有1行，包含n个整数，表示从小到大排序完毕的所有整数。 请在每个整数
后输出一个空格，并请注意行尾输出换行。
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

void InsertSort(SqList *L)
{
	   int i, j;
	   for (i = 2; i <= L->length; i++)
		   {
		    if (L->r[i]<L->r[i - 1])   /* 需将L->r[i]插入有序子表 */
			    {
			     L->r[0] = L->r[i];    /* 设置哨兵 */
			     for (j = i - 1; L->r[j]>L->r[0]; j--)
				      L->r[j + 1] = L->r[j];  /* 记录后移 */
			     L->r[j + 1] = L->r[0];   /* 插入到正确位置 */
			    }
		   }
 }

int main() {
	int len,elem;
	scanf("%d", &len);
	SqList L;
	L.length = len;
	for (int i = 1; i <= L.length; i++) {
		scanf("%d", &elem);
		L.r[i] = elem;
	}
	InsertSort(&L);
	for (int i = 1; i <= L.length; i++) {
		printf("%d ", L.r[i]);
	}
	printf("\n");
	return 0;
}