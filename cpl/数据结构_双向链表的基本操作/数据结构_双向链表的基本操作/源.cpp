#include<stdio.h>
#include<malloc.h>
#define OK 0
#define ERROR 1
typedef int Status;
typedef int ElemType;
typedef struct DulNode {
	ElemType data;
	struct DulNode*prior, *next;
}DulNode,*DulLinkList;

Status InitList(DulLinkList *L) {
	(*L) = (DulLinkList)malloc(sizeof(DulNode));
	if ((*L) != NULL) {
		(*L)->next = (*L)->prior = (*L);
		return OK;
	}
	else return ERROR;
}

Status DestoryList(DulLinkList*L) {
	DulLinkList p, q;
	p = (*L)->next;
	while (p != (*L)) {
		q = p->next;
		free(p);
		p = q;
	}
	free(*L);
	(*L) = NULL;
	return OK;
}

Status GetDulLinkList(DulLinkList*L) {
	DulLinkList p, r;
	*L = (DulLinkList)malloc(sizeof(DulNode));

}
void PrintDulList(DulLinkList*L) {
	DulLinkList p;
	p = (*L)->next;
	while (p->next != NULL) {
		printf("%i ", p->next->data);
	}
}

void printDoubleList(DulLinkList* list)
{
	DulLinkList head = *list;
	printf("------------next------------\n");
	while (head->next)
	{
		printf("data:%d\n", head->next->data);
		head = head->next;
	}
	printf("------------next------------\n");
	head = *list;
	printf("------------down------------\n");
	while (head->next)
	{
		printf("data:%d\n", head->next->data);
		head = head->next;
	}
	printf("------------down------------\n");
	return;
}
int main() {
	int N;
	DulLinkList L;
	while (scanf("%i", &N) != EOF) {
		switch (N) {
		case 1: {
			PrintDulList(&L);
		}break;
		case 2: {
			;
		}break;
		case 0: {
			;
		}break;
		default: break;
		}
	}
}