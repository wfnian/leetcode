/*
计算一个合法括号字符串的P序列。括号字符串的P序列是由每个右括号与其对应左括号之间的右括号个
数排列而成的。 例如，括号字符串“((()(())))”的P序列为：“1 1 2 4 5”。
输入
一组合法的括号字符串，每个括号字符串一行。
输出
每个括号字符串的P序列输出一行，每个数值后有一个空格。
样例输
(())
((()(())))
样例输出
1 2 
1 1 2 4 5 
#include<stdio.h>
#include<string.h>
int main() {
	char str[256];
	int Len = strlen(str);
	int i, a, b;
	while (scanf("%s", str) != EOF) {
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] == ')') {
				a = i;
			}
			//else continue;
			for (int j = a - 1; j > -1; j--) {
				if (str[j] == '(') {
					printf("%d ", a - j);
					break;
				}
				//else continue;
			}

		}
		printf("\n");
	}
}*/
//#include<stdio.h>
//typedef struct sqstack{
//	int a[256];
//	int top;
//}stack;
//void initial(stack *(&p)){
//	p = new stack;
//	for (int x = 0; x <= 255; x++)
//		p->a[x] = 0;
//	p->top = 0;
//}
//void push(stack *p){
//	p->top++;
//}
//void pop(stack *p)
//{
//	for (int t = 0; t <= p->top - 1; t++)
//		p->a[t]++;
//	printf("%d ", p->a[p->top - 1]);
//	p->a[p->top - 1] = 0;
//	p->top--;
//}
//int main()
//{
//	char str[256];
//	stack *p;
//	initial(p);
//	while (scanf("%s", str) == 1)
//	{
//		for (int i = 0; str[i] != 0; i++)
//		{
//			if (str[i] == '(')
//				push(p);
//			if (str[i] == ')')
//				pop(p);
//		}
//		printf("\n");
//	}
//}
#define num 256
#include<stdio.h>
#include<malloc.h>
typedef struct sqstack{
	int a[256];
	int top;
}stack;
void initial(stack *(&p)) {
	p = new stack;
	for (int x = 0; x < 255; x++)
		p->a[x] = 0;
	p->top = 0;
}
void push(stack *p) {
	p->top++;
}
void pop(stack*p) {
	for (int t = 0; t <= p->top; t++) {
		p->a[t]++;
	}
	printf(" %d", p->a[p->top - 1]);
	p->a[p->top - 1] = 0;
	p->top--;
}
int main() {
	char str[num];
	stack*p;
	initial(p);
	while (scanf("%s", str) != EOF) {
		for (int i = 0; str[i] != NULL; i++) {
			if (str[i] == '(')
				push(p);
			if (str[i] == ')')
				pop(p);
		}
		printf("\n");
	}
}