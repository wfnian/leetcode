#include<stdio.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;
typedef struct {
	ElemType data[MAXSIZE];
	int length;
}Sqlist;	//Sqlist 

Status GetElem(Sqlist L,int i,ElemType *e) {
	if (L.length == 0 || i<1 || i>L.length)
		return ERROR;
	else *e = L.data[i - 1];
	return OK;
}

Status ListInsert(Sqlist L, int i, ElemType *e) {
	int k;
	if (L.length == MAXSIZE)  return ERROR;
	if (i<1 || i>L.length + 1)  return ERROR;
	for (k = L.length - 1; k > i - 1; k--) {
		L.data[k + 1] = L.data[k];
	}
	L.data[i - 1] = *e;
	L.length + 1;
	return OK;
}

Status ListDelete(Sqlist L, int i, ElemType *e) {
	int k;
	if (L.length == 0) return ERROR;
	if (i<1 || i>L.length + 1) return ERROR;
	*e = L.data[i - 1];
	for (k = i; k < L.length; k++) {
		L.data[k - 1] = L.data[k];
	}
	L.length - 1;
	return OK;
}

Status PrintList(Sqlist L,int len) {
	for (int i = 1; i <=len; i++) {
		printf("%d ", L.data[i]);
	}
	printf("\n");
	return OK;
}
int main() {
	Sqlist L;
	int e;
	int M;
	scanf("%d", &M);
	L.length = M;
	for (int i = 0; i < M; i++) {
		scanf_s("%d", &e);
		GetElem(L, i, &e);
	}
	while (1) {
		char Operate[22];
		printf("输入你要执行的操作，如Delete,Insert\n");
		scanf("%s", Operate);
		switch (Operate[1]) {
		case 'e': {
			int Deletelem1, DeletePositon1;
			scanf_s("%d %d", &DeletePositon1, &Deletelem1);
			ListDelete(L, DeletePositon1, &Deletelem1);
			PrintList(L,L.length-1);
		} break;
		case 'n': {
			int Insertelem2, InsertPositon2;
			scanf_s("%d %d", &InsertPositon2, &Insertelem2);
			ListInsert(L, InsertPositon2, &Insertelem2);
			PrintList(L,L.length+1);
		} break;
		default:return ERROR;
		}
	}

	return 0;

}
