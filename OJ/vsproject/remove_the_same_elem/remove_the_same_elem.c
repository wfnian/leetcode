/*
题目描述
根据一个递增的整数序列构造有序单链表，删除其中的重复元素
输入
输入包括多组测试数据，每组测试数据占一行，第一个为大于等于0的整数n，表示该单链表的长度，后面跟着n个整数，表示链表的每一个元素。整数之间用空格隔开
输出
针对每组测试数据，输出包括两行，分别是删除前和删除后的链表元素，用空格隔开

如果链表为空，则只输出一行，list is empty

样例输入
5 1 2 3 4 5
5 1 1 2 2 3
0
样例输出
1 2 3 4 5
1 2 3 4 5
1 1 2 2 3
1 2 3
list is empty
*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;

typedef struct Node {
	DataType data;
	struct Node *next;
}LinkNode, *LinkList;

Status InitList(LinkList *L) {
	(*L) = (LinkList)malloc(sizeof(LinkList));
	if (*L == NULL)
		return ERROR;
	(*L)->next = NULL;
	return OK;
}

Status CreatList(LinkList *L, int n) {
	LinkList p;
	int i = 0;
	DataType elem;
	for (i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(LinkList));
		scanf("%d", &elem);
		p->data = elem;
		p->next = (*L)->next;
		(*L)->next = p;
	}
	return OK;
}

Status DeleList(LinkList *L) {
	LinkList P;
	P = (*L);
	while (P != NULL) {
		if (P->data == P->next->data) {
			P->next = P->next->next;
		}
		P = P->next;
	}
	return OK;
}

Status Print(LinkList *L) {
	LinkList p;
	p = (*L)->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}
int main() {
	LinkList L;
	int N;
	InitList(&L);
	while (~scanf("%d", &N)) {
		CreatList(&L, N);
		DeleList(&L);
		Print(&L);
	}

	return OK;
}