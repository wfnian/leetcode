#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
#define OK 0
#define ERROR -1
typedef int Status;
typedef int SElemType;

typedef struct {
	SElemType data[MAXSIZE];
	int top;
}Sqstack;

Status InitStack(Sqstack *S) {
	S->top = -1;
	return OK;
}

Status Push(Sqstack *S, SElemType e) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	//S->top++;
	S->data[++S->top] = e;
	return OK;
}

Status Pop(Sqstack *S, SElemType *e) {
	if (S->top == -1)
		return ERROR;
	*e = S->data[S->top];
	S->top--;
	return OK;
}

Status PrintStack(Sqstack S) {
	int i = 0;
	for (i = 0; i <= S.top; i++) {
		printf("%d ", S.data[i]);
	}
	printf("\n");
	return OK;
}
int main() {
	Sqstack S;
	int i = 0, *elem;
	InitStack(&S);
	printf("%d\n", S.top + 1);
	for (i = 0; i < 5; i++) {
		//scanf("%d", &elem);
		Push(&S, i);
	}
	PrintStack(S);	
	printf("%d\n", S.top + 1);

}