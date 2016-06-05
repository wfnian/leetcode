/*
输入数据只有一组，第一行有n+1个整数，第一个整数是这行余下的整数数目n，后面是n个整数。这一行整数是用来初始化列表的，并且输入的顺序与列表中的顺序相反，也就是说如果列表中是1、2、3那么输入的顺序是3、2、1。
第二行有一个整数m，代表下面还有m行。每行有一个字符串，字符串是“get”，“insert”，“delete”，“show”中的一种。如果是“get”或者“delete”，则其后跟着一个整数a，代表获得或者删除第a个元素；如果是“insert”，则其后跟着两个整数a和e，代表在第a个位置前面插入e；“show”之后没有整数。
输出
如果获取成功，则输出该元素；如果删除成功则输出“delete OK”；如果获取失败或者删除失败，则输出“get fail”以及“delete fail”。如果插入成功则输出“insert OK”，否则输出“insert fail”。如果是“show”则输出列表中的所有元素，如果列表是空的，则输出“Link list is empty”。注：所有的双引号均不输出。
样例输入
3 3 2 1
21
show
delete 1
show
delete 2
show
delete 1
show
delete 2
insert 2 5
show
insert 1 5
show
insert 1 7
show
insert 2 5
show
insert 3 6
show
insert 1 8
show
get 2
样例输出
1 2 3
delete OK
2 3
delete OK
2
delete OK
Link list is empty
delete fail
insert fail
Link list is empty
insert OK
5
insert OK
7 5
insert OK
7 5 5
insert OK
7 5 6 5
insert OK
8 7 5 6 5
7
*/
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 22
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
	if ((*L) == NULL)
		return ERROR;
	(*L)->next = NULL;
	return OK;

}
//尾插法创建链表
/*Status CreatList(LinkList *L, int n) {
	int e;
	LinkList p, r;
	r = (*L);
	int i;
	for (i = 0; i < n; i++) {
		p = (LinkList)malloc(sizeof(LinkList));
		scanf("%d", &e);
		p->data = e;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return OK;
}*/
//头插法创建链表
Status CreatList(LinkList *L, int n) {
	LinkList p;
	int i, elem;
	for (i = 0; i < n; i++) {
		scanf("%d", &elem);
		p = (LinkList)malloc(sizeof(LinkList));
		p->data = elem;
		p->next = (*L)->next;
		(*L)->next = p;
	}
	return OK;
}

//删除链表中的元素， pos位置的元素
Status DeleList(LinkList *L, int pos) {
	int i = 0;
	LinkList p, q;
	p = (*L);
	if ((*L) == NULL||(*L)->next == NULL) {
		printf("delete fail\n");
		return ERROR;
	}
	while (p != NULL&&i < pos - 1) {
		p = p->next;
		++i;
	}
	
	if (p->next == NULL) {
		printf("delete fail\n");
		return ERROR;
	}
	else
	{
		p->next = p->next->next;
		printf("delete OK\n"); 
		return OK;
	}
	return OK;
}

//在pos位置插入elem元素

Status InsertList(LinkList *L, int pos, DataType elem) {
	int i = 0;
	LinkList p, s;
	p = (*L);
	while (p != NULL&&i < pos - 1) {
		p = p->next;
		++i;
	}
	if (p == NULL || i > pos) {
		return ERROR;
	}
	s = (LinkList)malloc(sizeof(LinkList));
	s->data = elem;
	s->next = p->next;
	p->next = s;
	printf("insert OK\n");
	return OK;

}

//获取pos位置的元素
Status GetList(LinkList *L, int pos) {
	LinkList p;
	p = (*L);
	int i = 0;
	while (p != NULL&&i < pos ) {
		p = p->next;
		++i;
	}
	printf("%d\n", p->data);
	return OK;
}
Status PrintList(LinkList *L) {
	if (*L == NULL||(*L)->next==NULL) {
		printf("Link list is empty\n");
		return ERROR;
	}
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
	int N, NUM;
	int i;
	char str[MAXSIZE];
	scanf("%d", &N);
	InitList(&L);
	CreatList(&L, N);
	while (scanf("%d", &NUM) != NULL) {
		for (i = 0; i < NUM; i++) {
			scanf("%s", str);
			switch (str[0]) {
			case 's': {
				PrintList(&L);
			}break;
			case 'd': {
				int dele;
				scanf("%d", &dele);
				DeleList(&L, dele);
			}break;
			case 'g': {
				int pos;
				scanf("%d", &pos);
				GetList(&L, pos);
			}break;
			case 'i': {
				int pos, elem;
				scanf("%d %d", &pos, &elem);
				InsertList(&L, pos, elem);
			}break;
			default:break;
			}
		}
	}

	return OK;
}