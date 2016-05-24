#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
#define ok 0
#define error -1
typedef int status;
typedef int datatype;

typedef struct node {
	datatype data;
	struct node *next;
}node, *p_node;

typedef struct stack {
	node *top;
	node *base;
}stack, *p_stack;

void print(p_stack *s) {
	p_node p;
	p = (*s)->top;
	while (p != (*s)->base) {
		printf("%i ", p->data);
		p = p->next;
	}
}

int init(p_stack *s) {
	(*s)->base = (p_node)malloc(sizeof(node));
	if ((*s)->base == NULL)
		return error;
	(*s)->top = (*s)->base;
	(*s)->top->next = NULL;
	
	return ok;
}

int push(p_stack *s, datatype e) {
	p_node p;
	p = (p_node)malloc(sizeof(p_node));
	p->data = e;
	p->next = (*s)->top;
	(*s)->top = p;
	return ok;
}

int pop(p_stack *s, datatype e) {
	if ((*s)->base == (*s)->top) {
		return error;
	}
	p_node p;
	p = (*s)->top;
	(*s)->top = p->next;
	free(p);
	return ok;
}

int main() {
	p_stack s;
	init(&s);
	for (int i = 0; i < 5; i++) {
		push(&s, i);
	}
	print(&s);

	return ok;
}

//#include<stdio.h>
//#include<stdlib.h>
//
////定义结构
//typedef struct StackNode {
//	int data;
//	struct StackNode *next;
//}Node, *P_Node;
//
//typedef struct {
//	struct StackNode *top;
//	struct StackNode *base;
//}Stack, *P_Stack;
//
////打印
//void printLinkStack(P_Stack S) {
//	P_Node p = S->top;
//	while (p != S->base) {
//		printf("%3d", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
////初始化
//void initLinkStack(P_Stack *S) {
//	(*S)->base = (P_Node)malloc(sizeof(Node));
//	if ((*S)->base == NULL) {
//		printf("初始化失败！\n");
//		exit(-1);
//	}
//	(*S)->top = (*S)->base;
//	(*S)->top->next = NULL;
//}
////入栈
//void push(P_Stack S, int elem) {
//	P_Node e = (P_Node)malloc(sizeof(Node));
//	e->data = elem;
//	e->next = S->top;
//	S->top = e;
//}
////出栈
//void pop(P_Stack S) {
//	if (S->top == S->base) {
//		printf("栈已空！\n");
//		exit(-1);
//	}
//	P_Node node = S->top;
//	S->top = node->next;
//	printf("%d出栈\n", node->data);
//	free(node);
//}
////获取栈的长度
//int stackEmpty(P_Stack  S) {
//	if (S->top == S->base) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	P_Stack S;
//	initLinkStack(&S);
//	/*printf("此时栈的状态：%s\n", stackEmpty(S) ? "空栈" : "非空栈");
//	push(S, 3);
//	push(S, 9);
//	push(S, 6);
//	push(S, 7);
//	printLinkStack(S);
//	pop(S);
//	printLinkStack(S);
//	pop(S);
//	printLinkStack(S);
//	pop(S);
//	printLinkStack(S);
//	pop(S);
//	printLinkStack(S);
//	pop(S);
//	printLinkStack(S);
//	printf("Hello world !\n");*/
//	return 0;
//}
