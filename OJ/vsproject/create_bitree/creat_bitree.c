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

BiTree CreatTree1(DataType *pre, DataType *mid, int len) {
	BiNode *root = NULL;
	DataType *p;
	int lenleft = 0;
	if (len > 0) {
		root = malloc(sizeof(BiNode));
		root->data = pre[0];
		for (p = mid; p < mid + len; p++, lenleft++) {
			if (*p = pre[0])
				break;
		}
		root->lchild = CreatTree1(pre + 1, mid, lenleft);
		root->rchild = CreatTree1(pre + lenleft + 1, p + 1, len - lenleft - 1);
	}	
	return root;
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
	int N, i;
	BiTree T;
	while (scanf("%i", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%s %s", str1, str2);
			T = NULL;
			T = CreatTree1(str1, str2, strlen(str2));
			AftVisit(T);
			printf("\n");
		}
	}

	return OK;
}
