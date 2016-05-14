//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE 100
//#define OK 0
//#define ERROR -1
//typedef int Status;
//typedef int DataType;
//
//typedef struct Sqstack {
//	DataType data[MAXSIZE];
//	int top;
//}Sqstack;
//
//Status Initstack(Sqstack*S) {
//	S->top = -1;
//	return OK;
//}
//
//Status Push(Sqstack*S, DataType e) {
//	if (S->top = MAXSIZE - 1)
//		return ERROR;
//	S->data[++S->top] = e;
//	return OK;
//}
//
//Status Pop(Sqstack*S, DataType e) {
//	if (S->top == -1)
//		return ERROR;
//	e = S->data[S->top--];
//	return OK;
//}
//
//Status PrinStack(Sqstack*S) {
//	int i;
//	for (i = 0; i <= S->top; i++) {
//		printf("%d ", S->data[i]);
//	}
//	return OK;
//}
//int main() {
//	Sqstack S;
//	int i, temp = 1;
//	char c, str[MAXSIZE];
//	while (gets_s(str) != NULL) {
//		Initstack(&S);
//		int len = strlen(str);
//		for (i = 0; i < len; i++) {
//			switch (str[i]) {
//			case 'P': {
//				Push(&S,temp++);
//			}break;
//			case 'Q': {
//				Pop(&S, temp);
//			}  break;
//			default:printf("error\n"); break;
//			}
//		}
//		PrinStack(&S);
//		printf("\n");
//	}
//
//	return OK;
//}
#include <stdio.h>  
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include<conio.h>
#define Stack_size 1000

typedef struct stack {
    int *base;
	   int *top;
	
}stack;
int initstack(stack &S)
{
    S.base = (int *)malloc(Stack_size * sizeof(int));
  S.top = S.base;
   return 1;
	}
int Pushstack(stack &S, int c)
{
	    *(S.top)++;
	   *(S.top) = c;
	    return 0;
}
int Popstack(stack &S)
{
    int k = *S.top;
   S.top--;
   return k;
}
bool isEmpty(stack &S)
{
	return S.top == S.base;
}
int main()
{
    stack S;
    initstack(S);
    char Shuru[1000];
    while (1) {
       int Number = 1;
	      scanf("%s", Shuru);
		      for (int i = 0; i<(int)strlen(Shuru); i++) {
			          if (Shuru[i] == 'P') {
			              Pushstack(S, Number);
			               Number++;
			
			}
			else if (Shuru[i] == 'Q') {
			               if (!isEmpty(S)) {
				                  printf("%d ", Popstack(S));
				
				}
				else {
				                  printf("error");
				                    break;
				
				}
			
			}
			else {
			              printf("error");
			             break;
			
			}
			
		}
		    while (!isEmpty(S)) {   //如果栈非空，全部出栈，保证栈为空   
		           Popstack(S);
		
		}
	        printf("\n");
	
	}
	return 0;
}
