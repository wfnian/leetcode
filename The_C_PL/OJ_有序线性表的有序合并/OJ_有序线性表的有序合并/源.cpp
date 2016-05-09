//#include<stdio.h>
//void MergeList(List La, List Lb, List &Lc) {
//	int La_len, Lb_len;
//	Elemtype ai, bj;
//	int i = 1, j = 1, k = 0;
//	InitList(Lc);
//	La_len = ListLength(La);
//	Lb_len = ListLength(Lb);
//	while ((i <= La_len) && )(J <= Lb_len)){
//		GetElem(La, i, ai);
//		GetElem(Lb, j, bj);
//		if (ai <= bj) {
//			ListInsert(Lc, ++k, bj);
//			++j;
//		}
//	}
//	while (i <= La_len) {
//		GetElem(La, i++, ai);
//		ListInaert(Lc, ++k, ai);
//	}
//	while (j <= Lb_len) {
//		GetElem(Lb, j++, bi);
//		ListInaert(Lc, ++k, bi);
//	}
//}
/*已知线性表 LA 和 LB 中的数据元素按值非递
减有序排列，现要求将 LA 和 LB 归并为一个新的线性
表 LC， 且 LC 中的数据元素仍然按值非递减有序排列。
例如，设LA=(3,5,8,11) ,LB=(2,6,8,9,11,15,20) 则
LC=(2,3,6,6,8,8,9,11,11,15,20)
算法描述如下：
从上述问题要求可知，LC中的数据元素或是LA中的
数据元素，或是LB中的数据元素，则只要先设LC为空表，然后将LA
或LB中的元素逐个插入到LC中即可。为使LC中元素按值非递减有序排
列，可设两个指针 i 和 j 分别指向LA和LB中某个元素，若设 i 
当前所指的元素为 a，j 所指的元素为 b，则当前应插入到 LC 中的元
素 c 为 c = a < b ? a : b显然，指针 i 和 j 的初值均为1（实际
写代码时往往是从 0 开始的），在所指元素插入 LC 之后，在 LA 或者
LB 中顺序后移。上述归并算法如下图：
输入
有多组测试数据，每组测试数据占两行。第一行是集合A，第一个
整数m（0<=m<=100）代表集合A起始有m个元素，后面有m个非递减
排序的整数，代表A中的元素。第二行是集合B，第一个整数n(0<=n<=100)代表集合B起始有n个元
素，后面有n个非递减排序的整数，代表B中的元素。每行中整数之间用一个空格隔开。
输出
每组测试数据只要求输出一行，这一行含有 m+n 个来自集合 A 和集
合B 中的元素。结果依旧是非递减的。每个整数间用一个空格隔开。
样例输入
4 3 5 8 11
7 2 6 8 9 11 15 20
样例输出
2 3 5 6 8 8 9 11 11 15 20
提示*/
#include<stdio.h>
int main() {
	//int N;// M, a[2222], b[222], c[2222], i, j, temp;
	while (1) {
		int N;
		int M, a[222], b[222], c[2222], i, j, temp;
		scanf("%i", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &M);
		for (i = 0; i < M; i++) {
			scanf("%d", &b[i]);
		}
		for (i = 0; i < N; i++) {
			c[i] = a[i];
		}
		for (i = N, j = 0; j < M, i < M + N; i++, j++) {
			c[i] = b[j];
		}

		for (i = 0; i < M + N - 1; i++) {
			for (j = 0; j < M + N - 1 - i; j++) {
				if (c[j] > c[j + 1]) {
					temp = c[j];
					c[j] = c[j + 1];
					c[j + 1] = temp;
				}
			}
		}
		for (i = 0; i < M + N-1; i++) {
			printf("%d ", c[i]);
		}
		printf("%d\n", c[M + N -1]);
	}

	return 0;

}
//int main() {
//	int set_A[100], set_B[100], len_A, len_B, i = 0, j = 0;
//	scanf("%i", &len_A);
//	for (i = 0; i < len_A; i++) {
//		scanf("%i", &set_A[i]);
//	}
//	scanf("%i", &len_B);
//	for (i = 0; i < len_B; i++) {
//		scanf("%i", &set_B[i]);
//	}
//	for (i = 0, j = 0; i < len_A&&j < len_B;) {
//		if (set_A[i] <= set_B[j]) {
//			printf("%i ", set_A[i]);
//			++i;
//		}
//		else {
//			printf("%i ", set_B[j]);
//			++j;
//		}
//
//		for (; i < len_A; i++) {
//		printf("%d",set_A[i]);
//		}
//		for (; j < len_B; j++) {
//		printf("%d",set_B[j]);
//		}
//
//	}
//}