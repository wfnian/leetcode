#include<stdio.h>
#include<stdlib.h>
#define ok 0
#define error 1
typedef int status;
typedef int elemtype;
typedef struct node {
	elemtype data;
	struct node*next;
}node, *linklist;

//status initlist(linklist*l, int n) {//单链表的头插法；
//	node *p;
//	int j, a;
//	*l = (linklist)malloc(sizeof(node));
//	(*l)->next = NULL;
//	for (int i = 0; i < n; i++) {
//		p = (linklist)malloc(sizeof(node));
//		scanf("%d", &a);
//		p->data = a;
//		p->next = (*l)->next;
//		(*l)->next = p;
//	}
//	return ok;
//}

status creatlist(linklist*l, int n) {
	linklist p, r;
	int k, i;
	(*l) = (linklist)malloc(sizeof(node));
	r = (*l);
	for (i = 0; i < n; i++) {
		p = (linklist)malloc(sizeof(node));
		scanf("%d", &k);
		p->data = k;
		p->next = r->next;
		r->next = p;
		r = p;
	}
	r->next = NULL;
	return ok;
}

void DealList(linklist *L) {
	linklist p, q;
	for (p = (*L)->next; p->next != NULL; ) {
		q = p->next;
		p->next = q->next;
		q->next = (*L)->next;
		(*L)->next = q;
	}
}
void printlist(linklist*l) {
	node*p;
	for (p = (*l)->next; p != NULL; p = p->next) {
		printf("%i ", p->data);
	}
	printf("\n");
}
int main() {
	linklist p;
	int n;
	while (scanf("%i", &n)!=EOF) {
		if (n == 0) {
			printf("list is empty\n");
		}
		else {
			creatlist(&p, n);
			printlist(&p);
			DealList(&p);
			printlist(&p);
		}
	}
	return 0;
}


