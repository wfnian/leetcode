#include<stdio.h>
#include<stdlib.h>
#define OK 0
#define ERROR 1
typedef int Status;
typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node*next;
} Node, *LinkList;

Status CreatList(LinkList*L, int n) {
	LinkList p, r;
	int Elem;
	(*L) = (LinkList)malloc(sizeof(Node));
	r = (*L);
	for (int i = 0; i < n; i++) {
		scanf_s("%i", &Elem);
		p = (LinkList)malloc(sizeof(Node));
		p->data = Elem;
		r->next = p;
		r = p;
	}
	r->next = NULL;
	return OK;
}

Status DelList(LinkList*L,ElemType *e) {
	LinkList p, q;
	p = (*L)->next; 
	while (p->data != *e) {
		q = p;
		p = p->next;
	}
	q->next = p->next;
	free(p);
	return OK;
}

Status InsertList(LinkList*L, ElemType*m) {
	LinkList p, q;
	q = (*L);
	while (q->data<=*m) {
		q = q->next;
	}
	p = (LinkList)malloc(sizeof(Node));
	p->data = *m;
	p->next = q->next;
	q->next = p;
	return OK;
}
Status PrintList(LinkList*L) {
	LinkList p;
	for (p = (*L)->next; p != NULL; p = p->next) {
		printf("%i\n", p->data);
	}
	//printf("\n");
	return OK;
}
int main() {
	LinkList L;
	int NUM, Elem;
	while (NUM=9) {
		CreatList(&L, NUM);
		scanf_s("%i", &Elem);
		//DelList(&L, &Elem);
		InsertList(&L, &Elem);
		PrintList(&L);
	}

}