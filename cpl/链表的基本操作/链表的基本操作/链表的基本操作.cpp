// 链表的基本操作.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#define OK 0
#define ERROR 1
typedef struct Node {
	int data;
	struct Node*next;
}LinkNode,*LinkList;

int Initlist(LinkList*L) {
	(*L) = (LinkList)malloc(sizeof(LinkList));
	(*L)->next = NULL;
	return OK;
}

int ClearList(LinkList *L, int e){
	LinkList p, q;
	p = (*L)->next;
	while (p != NULL) {
		q = p->next;
		free(p);
		p = q;
	}
	(*L)->next = NULL;
	return OK;
}

int Getelem(LinkList*L, int e) {
	int i, j;
	//LinkList p;
	//Node *L;
	*L = (LinkNode *)malloc(sizeof(LinkNode));   //申请头结点空间
	(*L)->next = NULL;                      //初始化一个空链表

	int x;                         //x为链表数据域中的数据
	while (scanf("%d", &x) != EOF)
	{
		LinkNode *p;
		p = (Node *)malloc(sizeof(Node));   //申请新的结点 
		p->data = x;                     //结点数据域赋值 
		p->next = (*L)->next;                    //将结点插入到表头L-->|2|-->|1|-->NULL 
		(*L)->next = p;
	}
	return OK;
}
int main()
{
    return 0;
}

