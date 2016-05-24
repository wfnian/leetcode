#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define OK 0
#define ERROR -1
#define MAXSIZE 222
typedef int Status;
typedef int DataType;

typedef struct {
	DataType data[MAXSIZE];
	int top;
}Sqstack;

Status InitSqstack(Sqstack *S) {
	S->top = -1;
	return OK;
}

Status Push(Sqstack *S, DataType e) {
	if (S->top == MAXSIZE - 1) {
		return ERROR;
	}

}