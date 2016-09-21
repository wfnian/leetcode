/*
输入
每行是一棵二叉树的带虚结点（#）表示的前序遍历序串
长度不超过2000。每个结点为一个小写字母或一个数字。
输出
对于每行输入的二叉树，如果是平衡二叉树则输出Yes，否则输出No
样例输入
#
abc####
样例输出
Yes
No
提示
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE  100
#define ERROR -1
#define OK 0

typedef struct BiNode {
	char data;
	int bf;
	struct BiNode *lchild;
	struct BiNode *rchild;
}BiNode, *BiTree;

BiTree CreatTree(char *datas, int len, int *i) {
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

int main() {

	char str[20000];
	int i;
	while (gets(str) != NULL) {
		BiTree T;
		T = NULL;
		i = 0;
		T = CreatTree(str, strlen(str), &i);
	}

	return OK;
}