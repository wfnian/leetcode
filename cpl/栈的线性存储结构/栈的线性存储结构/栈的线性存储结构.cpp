// 栈的线性存储结构.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<stdio.h>
#include<stdlib.h> 
#define MAXSIZE 10 
typedef struct SqStack {
	int data[MAXSIZE];
	int top;
} SqStack;

//打印
void printStack(SqStack S) {
	int i = 0;
	for (i = 0; i <= S.top; i++) {
		printf("%3d", S.data[i]);
	}
	printf("\n");
}
//初始化栈 
void initStatck(SqStack *S) {
	S->top = -1;
}
//清空栈 
void clearStack(SqStack *S) {
	S->top = -1;
}
//出栈 
int pop(SqStack *S) {
	int elem;
	if (S->top == -1) {
		printf("error:空栈！\n");
		exit(-1);
	}
	elem = S->data[S->top];
	S->top--;
	return elem;
}
//进栈 
void push(SqStack *S, int elem) {
	if (S->top == MAXSIZE - 1) {
		printf("error:栈已满！\n");
		exit(-1);
	}

	S->data[++S->top] = elem;
}
//获取栈的长度
int stackLength(SqStack S) {
	return S.top + 1;
}

int main() {
	void printStack();//打印 
	void initStatck(SqStack *); //初始化栈 
	void clearStack(SqStack *);//清空栈 
	int pop(SqStack *);//进栈 
	void push(SqStack *, int);//出栈 
	int stackLength(SqStack);

	SqStack S;
	int i = 0;
	initStatck(&S);
	printf("初始化成功！\n");
	printf("此时栈的长度为：%3d\n", S.top + 1);
	for (i = 0; i<5; i++) {
		push(&S, i + 1);
	}
	printStack(S);
	printf("此时栈的长度为：%3d\n", S.top + 1);
	printf("出栈：%3d\n", pop(&S));
	printStack(S);
	printf("出栈：%3d\n", pop(&S));
	printStack(S);
	printf("此时栈的长度为：%3d\n", S.top + 1);
	printf("清空栈！\n");
	clearStack(&S);
	printf("此时栈的长度为：%3d\n", S.top + 1);
	pop(&S);
	return 0;
}