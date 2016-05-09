/*题目描述
根据一个递增的整数序列构造有序单链表，删除其中的重复元素
输入
输入包括多组测试数据，每组测试数据占一行，第一个为大于等
于0的整数n，表示该单链表的长度，后面跟着n个整
数，表示链表的每一个元素。整数之间用空格隔开
输出
针对每组测试数据，输出包括两行，分别是删除前和删除后的
链表元素，用空格隔开 如果链表为空，则只输出一行，list is empty
样例输入
5 1 2 3 4 5
5 1 1 2 2 3
0
样例输出
1 2 3 4 5 
1 2 3 4 5 
1 1 2 2 3 
1 2 3 
list is empty*/
//#include<stdio.h>
//#include<stdlib.h>
//struct numb {
//	int num;
//	struct numb*next;
//}del, *dele;
//void Del_bnn(struct numb *head, struct numb*p);
//void Del_bnn(struct numb *head,struct numb*p){
//	struct numb*q;
//	if (p == NULL) {
//		;
//		return;
//	}
//	if (p == head) {
//		head = p->next;
//		q = p;
//		free(q);
//	}
//	else {
//		q = p->next;
//		p->next = q->next;
//		free(q);
//	}
//}
//void print_s() {
//
//}
//int main() {
//	int N, a[200];
//	while (2) {
//		scanf("%d", &N);
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &a[i]);
//		}
//	}
//	//Del_bnn(N, &a);
//
//}
/*#include<stdio.h>
int main() {
	int a[60000], i, j;
	int M = 0, N;
	while (~scanf("%d", &N)) {
		if (N == 0) {
			printf("list is empty\n");
			break;
		}
		for (i = 0; i < N; i++) {
			scanf_s("%d", &a[i]);
		}
		for (i = 0; i < N; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		for (i = 0, j = 0; i < N; i++) {
			if (a[i] != a[i + 1]) {
				a[j++] = a[i];
			}
			else {
				M++;
			}
		}
		for (j = 0; j < N - M; j++) {
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;

}*/
#include <stdio.h>
#include<malloc.h>
typedef int Status;
typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node *next;
}*LinkList, Node;
Status InitList(LinkList *L) {
	*L = (LinkList)malloc(sizeof(Node));
	if (!(*L))
		return 0;
	(*L)->next = NULL;
	return 1;
}
void CreatList(LinkList *L, int n) {
	LinkList p, r;
	int i, a;
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		p = (LinkList)malloc(sizeof(Node));
		p->data = a;
		r->next = p;
		r = p;
	}
	r->next = NULL;
}

LinkList RemoveDupNode(LinkList L) {
	LinkList p, q, r;
	p = L->next;
	if (p == NULL)
		return 0;
	while (p) {
		q = p;
		while (q->next) {
			if (q->next->data == p->data) {
				r = q->next; //r保存需要删掉的结点 
				q->next = r->next; //需要删掉的结点的前后结点相接 
				free(r);
			}
			else
				q = q->next;
		}
		p = p->next;
	}
	return L;
}

Status Output(LinkList L) {
	LinkList p = L;
	if (p->next == NULL)
		return 0;
	while (p->next) {
		printf("%d ", p->next->data);
		p = p->next;
	}
	printf("\n");
	return 1;
}

int main() {
	int n;
	while (~scanf("%d", &n)) {
		if (n == 0)
			printf("list is empty\n");
		else {
			LinkList L;

			InitList(&L);
			CreatList(&L, n);
			Output(L);
			RemoveDupNode(L);
			Output(L);
		}
	}
	return 1;
}