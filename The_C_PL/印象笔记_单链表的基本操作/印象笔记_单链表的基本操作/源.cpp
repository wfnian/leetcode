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
	struct Node*next;
}Node, *LinkList;

Status InitList(LinkList *L) {
	(*L) = (LinkList)malloc(sizeof(LinkList));
	if ((*L)->next == NULL)
		return ERROR;
	(*L)->next = NULL;
	return OK;
}

//头插法创建链表
Status CreatList_H(LinkList*L, DataType n) {
	int i, elem;
	LinkList P;
	for (i = 0; i < n; i++) {
		P = (Node*)malloc(sizeof(LinkList));
		scanf("%d", &elem);
		P->data = elem;
		P->next = (*L)->next;
		(*L)->next = P;
	}
	return OK;
}

//尾插法创建链表
Status CreatList_T(LinkList *L, int N) {
	int i, elem;
	LinkList p, r;
	r = (*L);
	for (i = 0; i < N; i++) {
		scanf("%d", &elem);
		p = (Node*)malloc(sizeof(Node*));
		p->data = elem;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return OK;
}

Status PrintList(LinkList*L) {
	LinkList P;
	P = (*L)->next;
	while (P!= NULL) {
		printf("%d ", P->data);
		P = P->next;
	}
	printf("\n");
	return OK;
}

Status main() {
	LinkList L;
	int N;
	scanf("%d", &N);
	InitList(&L);
	CreatList_T(&L, N);
	PrintList(&L);
	return OK;
}