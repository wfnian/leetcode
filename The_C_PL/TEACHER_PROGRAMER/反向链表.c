/*题目描述
根据一个整数序列构造一个单链表，然后将其反转。
例如：原单链表为 2 3 4 5 ，反转之后为5 4 3 2
输入
输入包括多组测试数据，每组测试数据占一行，第一个为大于
等于0的整数n，表示该单链表的长度，后面跟着n个整数，表
示链表的每一个元素。整数之间用空格隔开
输出
针对每组测试数据，输出包括两行，分别是反转前和反转后的
链表元素，用空格隔开 如果链表为空，则只输出一行，list is empty
样例输入
5 1 2 3 4 5 
0
样例输出
1 2 3 4 5 
5 4 3 2 1 
list is empty*/
#include <stdio.h>
#include<malloc.h>
typedef int Status;
typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node *next;
}*LinkList, Node;
//Status InitList(LinkList *L) {//初始化链表
//	*L = (LinkList)malloc(sizeof(Node));
//	if (!(*L))
//		return 0;
//	(*L)->next = NULL;
//	return 1;
//}
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
	r->next = '\0';
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
void DealList(LinkList *L, int n) {
	LinkList p, q;
	p = (*L)->next;
	while (p->next != NULL) {
		q = p->next;
		p->next = q->next;
		q->next = (*L)->next;
		(*L)->next = q;
	}
}
int main(){
	int n;
	while (~scanf("%d", &n)) {
		if (n == 0)printf("list is empty");
		else {
			LinkList L;
		//	InitList(&L);
			CreatList(&L, n);
			Output(L);
			DealList(&L, n);
			Output(L);
		}
	}
	return 0;
}