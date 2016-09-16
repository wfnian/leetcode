/*#include<stdio.h>
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

Status PrintList(Sqlist L) {
	for (int i = 1; i < L.length; i++) {
		printf("%d ", L.data[i]);
	}
	printf("\n");
	return OK;
}

Status GetElem(Sqlist L,int i,ElemType *e) {
	if (L.length == 0 || i<1 || i>L.length)
		return ERROR;
	else *e = L.data[i - 1];
	return OK;
}
Status AppenElem(Sqlist *L, ElemType M) {
	int data;
	int i;
	for (i = 1; i <= M; i++) {
		scanf_s("%i", &data);
		(*L).data[i] = data;
	}
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
	L.length ++;
	PrintList(L);
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
	L.length --;
	PrintList(L);
	return OK;
}

int main() {
	Sqlist L;
	int e;
	int M;
	scanf("%d", &M);
	L.length = M;
	AppenElem(&L, M);
	while (1) {
		char Operate[22];
		printf("输入你要执行的操作，如Delete,Insert\n");
		scanf("%s", Operate);
		switch (Operate[1]) {
		case 'e': {
			int Deletelem1, DeletePositon1;
			scanf_s("%d %d", &DeletePositon1, &Deletelem1);
			ListDelete(L, DeletePositon1, &Deletelem1);
		} break;
		case 'n': {
			int Insertelem2, InsertPositon2;
			scanf_s("%d %d", &InsertPositon2, &Insertelem2);
			ListInsert(L, InsertPositon2, &Insertelem2);
		} break;
		default:return ERROR;
		}
	}

	return 0;

}*/
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

Status GetElem(Sqlist* L, int i, ElemType *e) {
	if (L->length == 0 || i<1 || i>L->length)
		return ERROR;

	*e = L->data[i - 1];
	return OK;
}

Status AppendElem(Sqlist* L, ElemType *e) {
	if (L->length == MAXSIZE)
		return ERROR;

	L->data[L->length] = *e;
	L->length = L->length + 1;
	return OK;
}

Status ListInsert(Sqlist* L, int i, ElemType *e) {
	int k;
	if (L->length == MAXSIZE)
		return ERROR;
	if (i<1 || i>(L->length + 1))
		return ERROR;

	for (k = L->length - 1; k >= i - 1; k--) {
		L->data[k + 1] = L->data[k];
	}
	L->data[i - 1] = *e;
	L->length = L->length + 1;
	return OK;
}

Status ListDelete(Sqlist* L, int i, ElemType *e) {
	int k;
	if (L->length == 0)
		return ERROR;
	if (i<1 || i>L->length)
		return ERROR;

	*e = L->data[i - 1];
	for (k = i; k < L->length; k++) {
		L->data[k - 1] = L->data[k];
	}
	L->length = L->length - 1;
	return OK;
}

Status PrintList(Sqlist* L) {
	for (int i = 0; i < L->length; i++) {
		printf("%d ", L->data[i]);
	}
	printf("\n");
	return OK;
}
int main() {
	Sqlist L;
	int e;
	int M;
	int ret;
	L.length = 0;
	scanf_s("%d", &M);
	// L.length = M;
	for (int i = 0; i < M; i++) {
		scanf_s("%d", &e);
		if (AppendElem(&L, &e) != OK) {
			return ERROR;
		}
	}
	while (1) {
		char Operate;
		printf("Please enter [d]elete, [i]nsert or [q]uit.\n");
		scanf_s("%c", &Operate);
		switch (Operate) {
		case 'd':
		{
			int Deletelem1, DeletePositon1;
			printf("Enter the position of element you want to delete: ");
			scanf_s("%d", &DeletePositon1);
			ret = ListDelete(&L, DeletePositon1, &Deletelem1);
			if (ret != OK) {
				printf("Input error\n");
				break;
			}
			printf("\nThe element just being deleted is %d.\n", Deletelem1);
			printf("The rest of the list is:\n");
			PrintList(&L);
			break;
		}
		case 'i':
		{
			int Insertelem2, InsertPositon2;
			printf("Enter the position and element you want to insert: ");
			scanf_s("%d %d", &InsertPositon2, &Insertelem2);
			ret = ListInsert(&L, InsertPositon2, &Insertelem2);
			if (ret != OK) {
				printf("Input error\n");
				break;
			}
			printf("The list now is:\n");
			PrintList(&L);
			break;
		}
		case 'q':
		{
			printf("quit!\n");
			return OK;
		}
		default:
			printf("Wrong answer, Please enter [d]elete, [i]nsert or [q]uit.\n");
		}
	}

	return 0;

}
