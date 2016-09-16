#include<stdio.h>
#include<string.h>
#define MAXSIZE 200
#define OK 0
#define ERROR -1
typedef int Status;
typedef char DataType;

typedef struct Sqstack {
	DataType data[MAXSIZE];
	int top;
}Sqstack;

Status InitStack(Sqstack *S){
	S->top = -1;
	return OK;
}

Status Push(Sqstack*S, DataType *e) {
	if (S->top == MAXSIZE - 1)
		return ERROR;
	S->data[++S->top] = *e;
	return OK;
}
Status Pop(Sqstack*S,DataType*e) {
	if (S->top == -1)
		return ERROR;
	*e = S->data[S->top--];
	return OK;
}

Status PrintStack(Sqstack*s) {
	int i;
	for (i = 0; i <= s->top; i++) {
		printf("%c", s->data[i]);
	}
	printf("\n");
	return OK;
}

int main() {
	Sqstack S;
	int i = 0;
	char c,str[MAXSIZE];
	InitStack(&S);
	while (gets_s(str)!=NULL) {
		int len;
		InitStack(&S);
		len = strlen(str);
		for (i = 0; i < len; i++) {
			switch (str[i]) {
			case '#': {
				Pop(&S,&str[i]);
			}break;
			case '@': {
				InitStack(&S);
			}break;
			default:Push(&S, &str[i]); break;
			}
		}
		PrintStack(&S);
	}

	return 0;

}