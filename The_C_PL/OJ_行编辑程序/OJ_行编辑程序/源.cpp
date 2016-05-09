#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define stack_init_size 100
#define stackincrement 10
typedef int Status;
typedef struct aaa{
	int *base;
	int *top;
	int stacksize;
	struct aaa*next;
}SqStack;
void InitStack(SqStack S){
	S.base = (int *)malloc(stack_init_size*sizeof(int));
	if (!S.base)printf("overflow");
	S.top = S.base;
	S.stacksize = stack_init_size;
}
int ClearStack(SqStack *S)
{
	SqStack p, q;
	p.top= S->top;
	while (p.next)
	{
		q = p;
		p.next = q.next;
		free(&q);
	}
	S->base = 0;
	return 0;
}
void LineEdit() {//算法3.2
	//利用字符栈S,从终端接收一行并传送至调用过程的数据区
	char ch, temp;
	SqStack s;
	InitStack(s);//构造空栈S
	ch = getchar();//从终端接收第一个字符
	while (ch != EOF) {//EOF为全文结束符
		while (ch != EOF&&ch != '\n') {
			switch (ch) {
			//case'#': Pop(S, ch); break;//仅当栈非空时退栈，未考虑栈满情况
			case'@':ClearStack(&s); break;//重置S为空栈
			//default:Push(S, ch); break;//有效字符进栈，未考虑栈满情况
			}
			ch = getchar();//从终端接收下一个字符
		}
	//	temp = s->base;
	//	while (*temp != s.top) {
			printf("%c", temp);
			++temp;
		//}
	//	ClearStack(s);//重置S为空栈
		printf("\n");
		if (ch != EOF) {
			ch = getchar();
		}
	}
	//DestoryStack(s);
}
void main(){
	LineEdit();
}