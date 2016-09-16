#include<stdio.h>
#include<stdlib.h>
#define OK 0
#define ERROR 1
typedef int SElemType;
typedef int Status;
typedef struct StackNode {
	SElemType data;
	struct StackNode*next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack {
	LinkStackPtr top;
	int count;
}LinkStack;

Status Push(LinkStack *S, SElemType e) {
	LinkStackPtr s = (LinkStackPtr)_malloc_base(sizeof(StackNode));
	s->data = e;
	s->next = S->top;
	S->top = s;
	S->count++;
	return OK;
}

Status Pop(LinkStack *S, SElemType *e) {
	LinkStackPtr p;
	*e = S->top->data;
	p = S->top;
	S->top = S->top->next;
	free(p);
	S->count--;
	return OK;
}


int main() {
	LinkStack S;
	int a, b;
	int N;
	scanf("%d", &N);
	while (N--) {
		scanf("%d", &a);
		Push(&S,a);
	}
	while (1) {
		if(S->)
	}

}