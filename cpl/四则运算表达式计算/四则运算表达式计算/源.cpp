#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;

typedef struct {
	DataType data[MAXSIZE];
	int top;
}Sqstack;
Status Initstack(Sqstack *S) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	S->top = -1;
	return OK;
}

Status Push(Sqstack*S, DataType e) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	S->data[++S->top] = e;
	return OK;
}

Status Pop(Sqstack*S, DataType e) {
	if (S->top == -1)
		return ERROR;
	e = S->data[S->top];
	S->top--;
	return OK;
}

Status PrintStack(Sqstack *S) {
	int i = 0;
	for (i = 0; i <= S->top; i++) {
		printf("%d ", S->data[i]);
	}
	return OK;
}

int main() {
	Sqstack S_1, S_2;
	int i = 0, j = 0;
	char str[MAXSIZE];
	while (gets_s(str) != NULL) {
		Initstack(&S_1);
		Initstack(&S_2);
		for (i = 0; str[i] != NULL; i++) {
			switch (str[i]) {
			case'+': {
				Push(&S_2, str[i]);
			}break;
			case'-': {
				Push(&S_2, str[i]);
			}break;
			case'*': {
				Push(&S_2, str[i]);
			}break; 
			case'/': {
				Push(&S_2, str[i]);
			}break;
			case'(': {
				Push(&S_2, str[i]);
			}break;
			case')': {
				Push(&S_2, str[i]);
			}break;
			default: {
				Push(&S_1, str[i]-48);
			}break;
			}
		}
		PrintStack(&S_1);
	}
	
	

	return OK;
}