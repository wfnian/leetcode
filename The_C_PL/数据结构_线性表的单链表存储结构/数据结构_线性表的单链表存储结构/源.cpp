#include<stdio.h>
#include<malloc.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node *next;
}Node,*LinkList;

Status InitList(LinkList*L) {
	*L = (Node*)malloc(sizeof(Node));
	if (!(*L)) return OK;
	(*L)->next = '\0'; return ERROR;
}

Status GetElem(LinkList L, int i, ElemType *e) {
	int j;
	LinkList p;
	p = L->next;
	j = 1;
	while (p != NULL&&j < i) {
		p = p->next;
		++j;
	}
	if (p == NULL || j > i)	return ERROR;
	*e = p->data;
	return OK;
}
int main() {
	LinkList L;
	InitList(&L);
	int i = 1, N, Elem;
	scanf("%i", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d", &Elem);
		GetElem(L, i, &Elem);
	}
}