#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;

typedef struct StackNode {
	DataType data;
	struct StackNode*next;
}StackNode, *LinkStackPtr;

typedef struct LinkStack {
	LinkStackPtr top;
	int count;
}LinkStack;

Status InitStack(StackNode *S){
	S = NULL;
	return OK;
}

Status Push(LinkStack *S, DataType e) {
	LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
	s->data = e;
	s->next = S->top;
	S->top = s;
	S->top++;
	return OK;
}

Status Pop(LinkStack*S, DataType e) {
	LinkStackPtr P;
	e = S->top->data;
	P = S->top;
	S->top = S->top->next;
	free(P);
	S->count--;
	return OK;
}
int main() {
	LinkStack S;

}