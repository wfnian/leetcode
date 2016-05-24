//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE 100
//#define OK 0
//#define ERROR -1
//typedef int Status;
//typedef int DataType;
//
//typedef struct Node {
//	DataType data;
//	struct Node *next;
//}Node, *P_Node;
//
//typedef struct stack {
//	Node *top;
//	Node *base;
//}Stack, *P_Stack;
//
//void Print(P_Stack *S) {
//	P_Node P;
//	P = (*S)->top;
//	while (P != (*S)->base) {
//		printf("%i ", P->data);
//		P = P->next;
//	}
//}
//
//int Init(P_Stack *S) {
//	(*S)->base = (P_Node)malloc(sizeof(Node));
//	if ((*S)->base == NULL)
//		return ERROR;
//	(*S)->top = (*S)->base;
//	(*S)->top->next = NULL;
//	
//	return OK;
//}
//
//int Push(P_Stack *S, DataType e) {
//	P_Node P;
//	P = (P_Node)malloc(sizeof(P_Node));
//	P->data = e;
//	P->next = (*S)->top;
//	(*S)->top = P;
//	return OK;
//}
//
//int Pop(P_Stack *S, DataType e) {
//	if ((*S)->base == (*S)->top) {
//		return ERROR;
//	}
//	P_Node P;
//	P = (*S)->top;
//	(*S)->top = P->next;
//	free(P);
//	return OK;
//}
//
//int main() {
//	P_Stack S;
//	Init(&S);
//	for (int i = 0; i < 5; i++) {
//		Push(&S, i);
//	}
//	Print(&S);
//
//	return OK;
//}
#include<stdio.h>
#include<stdlib.h>

//定义结构
typedef struct StackNode {
	int data;
	struct StackNode *next;
}Node, *P_Node;

typedef struct {
	struct StackNode *top;
	struct StackNode *base;
}Stack, *P_Stack;

//打印
void printLinkStack(P_Stack S) {
	P_Node p = S->top;
	while (p != S->base) {
		printf("%3d", p->data);
		p = p->next;
	}
	printf("\n");
}
//初始化
void initLinkStack(P_Stack *S) {
	(*S)->base = (P_Node)malloc(sizeof(Node));
	if ((*S)->base == NULL) {
		printf("初始化失败！\n");
		exit(-1);
	}
	(*S)->top = (*S)->base;
	(*S)->top->next = NULL;
}
//入栈
void push(P_Stack S, int elem) {
	P_Node e = (P_Node)malloc(sizeof(Node));
	e->data = elem;
	e->next = S->top;
	S->top = e;
}
//出栈
void pop(P_Stack S) {
	if (S->top == S->base) {
		printf("栈已空！\n");
		exit(-1);
	}
	P_Node node = S->top;
	S->top = node->next;
	printf("%d出栈\n", node->data);
	free(node);
}
//获取栈的长度
int stackEmpty(P_Stack  S) {
	if (S->top == S->base) {
		return -1;
	}
	else {
		return 0;
	}
}
int main() {
	P_Stack S;
	initLinkStack(&S);
	/*printf("此时栈的状态：%s\n", stackEmpty(S) ? "空栈" : "非空栈");
	push(S, 3);
	push(S, 9);
	push(S, 6);
	push(S, 7);
	printLinkStack(S);
	pop(S);
	printLinkStack(S);
	pop(S);
	printLinkStack(S);
	pop(S);
	printLinkStack(S);
	pop(S);
	printLinkStack(S);
	pop(S);
	printLinkStack(S);
	printf("Hello world !\n");*/
	return 0;
}
