//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE 100
//#define OK 0
//#define ERROR -1
//typedef int Status;
//typedef int DataType;
//
//typedef struct TreeNode {
//	int data;
//	struct TreeNode* Lchild;
//	struct TreeNode* Rchild;
//}TreeNode, *P_TreeNode;
//
//int CreatTree(P_TreeNode&T) {
//	char data;
//	scanf("%c", &data);
//	if (data == '#') {
//		(T) = NULL;
//		return 0;
//	}
//	else {
//		(T) = (P_TreeNode)malloc(sizeof(P_TreeNode));
//		if ((T) = NULL)
//			return ERROR;
//		(T)->data = data;
//		CreatTree(T->Lchild);
//		CreatTree(T->Rchild);
//	}
//}
//
//////前序遍历
////int PreOrderTraversal(P_TreeNode *T) {
////	if (T == NULL)
////		return ERROR;
////	printf("%c ", (*T)->data);
////	PreOrderTraversal(&(*T)->Lchild);
////	PreOrderTraversal(&(*T)->Rchild);
////	return OK;
////}
////
//////中序遍历
////int MediumOrderTraversal(P_TreeNode*T) {
////	if (T == NULL)
////		return ERROR;
////	MediumOrderTraversal(&(*T)->Lchild);
////	printf("%c ", (*T)->data);
////	MediumOrderTraversal(&(*T)->Rchild);
////	return OK;
////}
//
////后序遍历
//int AfterOrderTraversal(P_TreeNode T) {
//	if ((T) == NULL)
//		return ERROR;
//	AfterOrderTraversal(T->Lchild);
//	AfterOrderTraversal(T->Rchild);
//	printf("%c ", T->data);
//	return OK;
//}
//
//int main() {
//	P_TreeNode T;
//	CreatTree(T);
//	AfterOrderTraversal(T);
//	return OK;
//}
#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode {
	int data;
	struct TreeNode *Lchild;
	struct TreeNode *Rchild;
} TreeNode, *P_TreeNode;

//创建树(前序遍历创建树，输入:AB#D##C##) 
void createTree(P_TreeNode &T) {
	char data;
	scanf("%c", &data);
	if (data == '#') {
		T = NULL;
		return;
	}
	else {
		T = (P_TreeNode)malloc(sizeof(TreeNode));
		if (T == NULL) {
			printf("创建失败！\n");
			exit(-1);
		}
		T->data = data;
		createTree(T->Lchild);//递归创建左子树 
		createTree(T->Rchild);//递归创建右子树 
	}
}
//先序遍历
void  preOrderTraversal(P_TreeNode T) {
	if (T == NULL) {
		return;
	}
	printf("%3c", T->data);
	preOrderTraversal(T->Lchild);
	preOrderTraversal(T->Rchild);
}
//中序遍历
void  mediumOrderTraversal(P_TreeNode T) {
	if (T == NULL) {
		return;
	}
	mediumOrderTraversal(T->Lchild);
	printf("%3c", T->data);
	mediumOrderTraversal(T->Rchild);
}
//后序遍历
void afterOrderTraversal(P_TreeNode T) {
	if (T == NULL) {
		return;
	}
	afterOrderTraversal(T->Lchild);
	afterOrderTraversal(T->Rchild);
	printf("%3c", T->data);
}

int main() {
	P_TreeNode T;
	createTree(T);
	printf("\n先序遍历：");
	preOrderTraversal(T);
	printf("\n中序遍历：");
	mediumOrderTraversal(T);
	printf("\n后序遍历：");
	afterOrderTraversal(T);
	printf("\n");
	return 0;
}