#include<stdio.h>
#include<stdlib.h>
typedef int Status;
typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node*Next;
}Node, *LinkList;

Status CreatList_1(LinkList *L, int n) {
	LinkList p;
	int Elem, i;
	(*L) = (LinkList)malloc(sizeof(Node));
	(*L)->Next = NULL;
	for (p = (*L)->Next, i = 0;i<n; i++) {
		p = (LinkList)malloc(sizeof(Node));
		scanf("%d", &Elem);
		p->data = Elem;
		p->Next = (*L)->Next;
		(*L)->Next = p;
	}
	return 0;
}

Status CreatList_2(LinkList *L, int n) {
	LinkList p, q;
	int i;
	ElemType Elem;
	(*L) = (LinkList)malloc(sizeof(Node));
	q = (*L);
	for (i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(Node));
		scanf("%i", &Elem);
		p->data = Elem;
		q->Next = p;
		q = p;
	}
	q->Next = NULL;

	return 0;
}
Status Print(LinkList *L) {
	Node *p;
	for (p = (*L)->Next; p != NULL; p = p->Next) {
		printf("%i ", p->data);
	}
	printf("\n");
	return 0;
}

void DealList(LinkList*L,ElemType *e) {
	LinkList p;
	p = (*L)->Next;
	int i = 0;
	for (p = (*L)->Next; p != NULL;p=p->Next) {
		++i;
		if(p->data==*e){
			printf("%i\n", i);
			break;
		}
	}

}
int main() {
	LinkList L;
	int M;
	while (scanf("%i", &M) != EOF) {
		//CreatList_1(&L, M);
		CreatList_2(&L, M);
		Print(&L);
		DealList(&L, &M);
	}

	return 0;

}