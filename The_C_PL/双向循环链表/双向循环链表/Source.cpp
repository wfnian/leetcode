#include<stdio.h>
#include<stdlib.h>
#define OK 0
#define ERROR 1
typedef int Status;
typedef int ElemType;
typedef struct DulNode {
	ElemType data;
	struct DulNode*piror, *next;
}DulNode,*DulLinkList;

void CreatList(DulLinkList*L) {
	*L = (DulLinkList)malloc(sizeof(DulNode));
	(*L)->piror = *L;
	(*L)->next = *L;
}
int main() {
	DulLinkList L;
	CreatList(&L);
	int Oper;
	while (scanf("%i", &Oper) != EOF) {
		switch (Oper) {
		case 1: {

		}break;
		case 2: {

		}break;
		case 0: {

		}break;
		default: break;
		}
	}
}