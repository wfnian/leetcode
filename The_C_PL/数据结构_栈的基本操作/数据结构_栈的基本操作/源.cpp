#include<stdio.h>
#include<malloc.h>
#define ERROR 1
#define OK 0
#define MAXSIZE 4
typedef int Status;
typedef int SElemType;
typedef struct {
	SElemType data[MAXSIZE];
	int top;
}SqStack;

static Status PrintSqStack(SqStack *S) {
	while (S->top != 0) {
		printf("%d ", S->data[S->top]);
		S->top--;
	}
	return OK;
}

Status Push(SqStack *S) {
	int e;
	if ((S)->top == MAXSIZE - 1){
		return ERROR;
		printf("%d**\n", e);
	}
	S->top++;
	S->data[S->top] = e;
//	printf("%d**\n", *e);
	return OK;
}

Status Pop(SqStack *S) {
	if (S->top == -1)
		return ERROR;
	int e = S->data[S->top];
	S->top--;
	return OK;
}

int main() {
	SqStack S;
	//S.data[1] = 2; S.data[2] = 1; S.data[3] = 3; S.data[4] = 4;
	PrintSqStack(&S);
	Pop(&S);
	printf("\n");
	return 0;
}