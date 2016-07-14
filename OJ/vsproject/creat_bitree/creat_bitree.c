/*题目描述
根据二叉树性质，由二叉树的前序遍历序和中序遍历序，可以唯一确定一
棵二叉树（设二叉树中各结点不相同）。请编写程序，根据输入的二叉树
的前序遍历序和中序遍历序，计算并输出其后序遍历序。
输入
输入第一行为二叉树的个数n，0＜n≤1000，其后n行每行中由两个字符串
组成，第一个是二叉树的前序遍历序，第二个是二叉树的中序遍历序，字
符串中每个字符表示一个结点，字符串长度不超过2000。
输出
对每个二叉树，输出一行后序遍历序。
样例输入
2
abc bac
ab ba
样例输出
bca
ba
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

BiTree CreatTree1(DataType *pre, DataType *mid, int len) {
	BiNode *root = NULL;
	DataType *p;
	int lenleft = 0;
	if (len <= 0) {
		return NULL;
	}
	if (len > 0) {
		root =(BiNode*) malloc(sizeof(BiNode));
		root->data = pre[0];
		for (p = mid; p < mid + len; p++) {
			if (*p = pre[0])
				break;
		}
		lenleft = p - mid;
		root->lchild = CreatTree1(pre + 1, mid, lenleft);
		root->rchild = CreatTree1(pre + lenleft + 1, p + 1, len - lenleft - 1);
	}	
	return root;
}

void AftVisit(BiTree T) {
	if (T == NULL)
		return ;
	AftVisit((T)->lchild);
	AftVisit((T)->rchild);
	printf("%c", (T)->data);
}

void cengci(BiNode *r)
{
	int i = 0, j = 1;
	BiNode *t[103];
	t[0] = r;
	while (i < j)//队列不为空时
	{
		if (t[i] != NULL)// i 结点不为空时
		{
			printf("%c", t[i]->data);//访问该节点
			t[j++] = t[i]->lchild; //左分支进队列
			t[j++] = t[i++]->rchild; //右分支进队列
		}
		else
			i++;
	}
}
int main() {
	char str1[200], str2[200];
	int N, i;
	BiTree T;
	//scanf("%i", &N);
	while (scanf("%i", &N) != EOF) {
		for (i = 0; i < N; i++) {
			scanf("%s %s", str1, str2);
			T = NULL;
			T = CreatTree1(str1, str2, strlen(str2));
			AftVisit(T);
			//cengci(&T);
			printf("\n");
		}
	}

	return OK;
}
