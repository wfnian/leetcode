#include<stdio.h>
#include<malloc.h>
#define StackSize 100
typedef int ElemType;
typedef struct Stack{
	ElemType *base;
	int top;
}StackPtr;

int CreatStack(StackPtr &S){
	S.base = (ElemType *)malloc(StackSize * sizeof(ElemType));
	S.top = -1;
	return 0;
}
int StackEmpty(StackPtr &S){
	if (S.top == -1)
		return 1;
	return 0;
}
int StackFull(StackPtr &S){
	if (S.top > StackSize - 1)
		return 1;
	return 0;
}
int Push(StackPtr &S, int item){
	if (!StackFull(S)){
		S.base[++S.top] = item;
		return 1;
	}
	return 0;
}
int Pop(StackPtr &S){
	if (!StackEmpty(S)){
		S.top -= 1;
		return S.base[S.top + 1];
	}
	return 0;
}
static int j = -1;
int Find(StackPtr &S, int *t){
	int temp = 0;
	j += 1;
	int item = Pop(S);
	for (int m = 0; m < j; m++){
		if (item <= t[m])
			temp += 1;
	}
	t[j] = item;
	return temp;
}
int main(){
	char str[100];
	StackPtr S;
	CreatStack(S);
	while (scanf("%s", str) != EOF){
		int cou = 1, i;
		int a[100] = { 0 };
		for ( i = 0; str[i] != '\0'; i++){
			if (str[i] == '(')
				Push(S, cou);
			if (str[i] == ')')
				printf("%d ", Find(S, a) + 1);
			cou += 1;
		}
		printf("\n");
	}
}