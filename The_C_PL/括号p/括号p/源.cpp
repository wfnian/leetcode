#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;

typedef struct Sqstack {
	DataType data[MAXSIZE];
	int top;
}Sqstack;

Status Initstack(Sqstack *S) {
	S->top = -1;
	return OK;
}

Status Push(Sqstack *S, DataType e) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	S->data[++S->top] = e;
	return OK;
}

Status Pop(Sqstack *S) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	S->top--;
	//S->data[S->top];

	return S->data[S->top + 1];
}

Status Adnum(Sqstack *S) {
	int i;
	if (S->top == -1)
		return ERROR;
	i = S->top;
	while (i != -1) {
		S->data[--S->top] += 1;
	}
	return OK;
}
//
//Status Print(Sqstack *S) {
//	int i = 0;
//	for (i = 0; i <= S->top; i++) {
//		printf("%c ", S->data[i]);
//	}
//	return OK;
//}

int main() {
	Sqstack S;
	int i;
	Initstack(&S);
	/*for (i = 0; i < 12; i++) {
	scanf("%c", &e);
	Push(&S, e);
	}*/
	char str[MAXSIZE];
	while (scanf("%s", str) != EOF) {
		for (i = 0; str[i] != NULL; i++) {
			if (str[i] == '(')
				Push(&S, 1);
			if (str[i] = ')') {
				printf("%d ", Pop(&S));
				Adnum(&S);
			}
		}
		printf("\n");
	}
	//Print(&S);
}