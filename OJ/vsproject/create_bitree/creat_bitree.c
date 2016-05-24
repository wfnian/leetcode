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

/*BiTree CreatTree(DataType *datas, int len, int *i) {
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

*/

BiTree CreatTree1(DataType *pre, DataType *mid, int len) {
	BiNode *root ;
	DataType *p;
	int lenleft = 0;
	if (len < 0) {
		root = malloc(sizeof(BiNode));
		root->data = pre[0];
		for (p = mid; p < mid + len; p++, lenleft++) {
			if (*p = pre[0])
				break;
		}
		root->lchild = CreatTree1(pre + 1, mid, lenleft);
		root->rchild = CreatTree1(pre + lenleft + 1, p + 1, len - lenleft - 1);
		
	}return root;
}

int PreVisit(BiTree T) {
	if (T == NULL)
		return ERROR;
	printf("%c", (T)->data);
	PreVisit((T)->lchild);
	PreVisit((T)->rchild);
	return OK;
}

int MidVisit(BiTree T) {
	if (T == NULL)
		return ERROR;
	MidVisit((T)->lchild);
	printf("%c", (T)->data);
	MidVisit((T)->rchild);
	return OK;
}

int AftVisit(BiTree T) {
	if (T == NULL)
		return ERROR;

	AftVisit((T)->lchild);
	AftVisit((T)->rchild);
	printf("%c", (T)->data);
	return OK;
}

int main() {
	char str1[200], str2[200];
	int i;
	int N;
	while (scanf("%i", &N) != EOF) {
		gets(str1);
		gets(str2);
		BiTree T;
		T = NULL;
		i = 0;
		//T = CreatTree(str1, strlen(str1), &i);
		T = CreatTree1(str1, str2, strlen(str1));
		//MidVisit(T);
		//printf(" ");
		AftVisit(T);
		printf(" ");
		//PreVisit(T);
		printf("\n");
	}

	return OK;
}
