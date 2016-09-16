#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 1000
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

Status Push(Sqstack *S, DataType e) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	S->data[++S->top] = e;
	return OK;
}

Status Pop(Sqstack*S, DataType e) {
	if (S->top == -1) {
		return ERROR;
		
	}
	e = S->data[S->top];
	printf("%d ", e);
	S->top--;
	return OK;
}

/*Status PrintStack(Sqstack s) {
	int i = 0;
	for (i = 0; i <= s.top; i++) {
		printf("%d ", s.data[i]);
	}
	return OK;
}*/

int main() {
	Sqstack S;
	int i, J, elem, len;
	Initstack(&S);
	char str[MAXSIZE];
	while (scanf("%s",str)!=EOF) {
		Initstack(&S);
		len = strlen(str);
		for (i = 0, J = 0; str[i]!=NULL; i++) {
			switch (str[i]) {
			case'P': {
				Push(&S, J + 1);
				J++;
			}break;
			case'Q': {
				if (S.top == -1) {
					printf("error");
					goto loop;
				}
				else Pop(&S, J/* + 1*/);
			}
			default:break;
			}
		}
	loop:
		printf("\n");
	}
}