/*
	二叉树的前序中序后序遍历
*/
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

BiTree CreatTree(DataType *datas, int len, int *i) {
	BiNode *root;
	if ((*i) > len)
		return NULL;
	if (datas[*i] == '#') {
		(*i)++;
		return NULL;
	}
	root = (BiNode*)malloc(sizeof(BiNode));
	root->data = datas[*i];
	(*i)++;
	root->lchild = CreatTree(datas, len, i);
	root->rchild = CreatTree(datas, len, i);
	return root;
}


int PreVisit(BiTree *T) {
	if (T == NULL)
		return ERROR;
	printf("%c", (*T)->data);
	PreVisit(&(*T)->lchild);
	PreVisit(&(*T)->rchild);
	return OK;
}

int MidVisit(BiTree *T) {
	if (T == NULL)
		return ERROR;
	printf("%c", (*T)->data);
	MidVisit(&(*T)->lchild);
	MidVisit(&(*T)->rchild);
	return OK;
}

int AftVisit(BiTree *T) {
	if (T == NULL)
		return ERROR;
	printf("%c", (*T)->data);
	AftVisit(&(*T)->lchild);
	AftVisit(&(*T)->rchild);
	return OK;
}

int main() {
	BiTree T;

	char str[100];
	int i; 
	while (gets(str)) {
		T = NULL;
		i = 0;
		T = CreatTree(str, strlen(str), &i);
		PreVisit(&T);
		printf(" ");
		MidVisit(&T);
		printf(" ");
		AftVisit(&T);
		printf(" \n");
	}

	return OK;
}