#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE  100
#define ERROR -1
#define OK 0
typedef char DataType;

typedef struct BiNode {
	DataType data;
	struct BiNode *lchild;
	struct BiNode *rchild;
}BiNode, *BiTree;

BiTree CreatTree(DataType *datas, int *i, int len) {
	BiTree *root;
	if ((*i) > len)
		return NULL;
	if (datas[*i] == '#') {
		(*i)++;
		return NULL;
	}
	root = (BiNode*)malloc(sizeof(BiNode));
	(*root)->data = datas[*i]; (*i)++;
	(*root)->lchild = CreatTree(datas, i + 1, len);
	(*root)->rchild = CreatTree(datas, i + 1, len);
	return root;
}

void InitTree(BiTree*T) {
	(*T) = NULL;
}

int PreVisit(BiTree *T) {
	if (T == NULL)
		return ERROR;
	printf("%c ", (*T)->data);
	PreVisit(&(*T)->lchild);
	PreVisit(&(*T)->rchild);
	return OK;
}

int MidVisit(BiTree *T) {
	if (T == NULL)
		return ERROR;
	printf("%c ", (*T)->data);
	MidVisit(&(*T)->lchild);
	MidVisit(&(*T)->rchild);
	return OK;
}

int AftVisit(BiTree *T) {
	if (T == NULL)
		return ERROR;
	printf("%c ", (*T)->data);
	AftVisit(&(*T)->lchild);
	AftVisit(&(*T)->rchild);
	return OK;
}

int main() {
	BiTree T;
	InitTree(&T);
	char str[200];
	int i; 
	while (gets(str)) {
		i = 0;
		T = CreatTree(str, &i, strlen(str));
		MidVisit(&T);

	}

	return OK;
}