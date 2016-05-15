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

Status InitLinklist(LinkList *L) {
	(*L) = (LinkList)malloc(sizeof(LinkList));
	if ((*L) == NULL)
		return ERROR;
	(*L)->next = NULL;
	return OK;
}

Status PrintLinklist(LinkList*L) {
	LinkList p;
	p = (*L)->next;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	return OK;
}
//β�巨
Status CreatLinklist(LinkList*L, DataType n) {
	int i = 0, elem;
	LinkList p;
	LinkList r;
	r = (*L);
	for (i = 0; i < n; i++) {
		p = (Node*)malloc(sizeof(LinkList));
		scanf("%d", &elem);
		p->data = elem;
		p->next = NULL;
		r->next = p;
		r = p;
	}

	return OK;
}

int main() {
	LinkList L;
	int n;
	scanf("%i", &n);
	InitLinklist(&L);
	CreatLinklist(&L, n);
	PrintLinklist(&L);
	
	return OK;

}
