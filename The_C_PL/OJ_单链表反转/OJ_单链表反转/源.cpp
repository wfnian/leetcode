/*题目描述
根据一个整数序列构造一个单链表，然后将其反转。
例如：原单链表为 2 3 4 5 ，反转之后为5 4 3 2
输入
输入包括多组测试数据，每组测试数据占一行，第一个为大于
等于0的整数n，表示该单链表的长度，后面跟着n个整数，表
示链表的每一个元素。整数之间用空格隔开
输出
针对每组测试数据，输出包括两行，分别是反转前和反转后的
链表元素，用空格隔开 如果链表为空，则只输出一行，list is empty
样例输入
5 1 2 3 4 5 
0
样例输出
1 2 3 4 5 
5 4 3 2 1 
list is empty*/
//#include<stdio.h>
//int main() {
//	int N, a[100000];
//	while (~scanf_s("%d", &N)) {
//		if (N == 0) {
//			printf("list is empty\n");
//			break;
//		}
//		else {
//			int i;
//			for (i = 0; i < N; i++) {
//				scanf_s("%d", &a[i]);
//			}
//			for (i = 0; i < N; i++) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//			for (i = N - 1; i >= 0; i--) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int N, a[100000];
//	while (scanf_s("%d", &N)!=0) {
//		if (N == 0) {
//			printf("list is empty\n");
//			break;
//		}
//		else {
//			int i;
//			for (i = 0; i < N; i++) {
//				scanf_s("%d", &a[i]);
//			}
//			for (i = 0; i < N; i++) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//			for (i = N - 1; i >= 0; i--) {
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include <stdio.h>
#include<malloc.h>
typedef int Status;typedef int ElemType;
typedef struct Node {
	ElemType data;
	struct Node *next;
}*LinkList, Node;
void CreatList(LinkList *L, int n) {
	Node *p, *r;
	int i, a;
	(*L) = (LinkList)malloc(sizeof(LinkList));
	r = (*L);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a);
		p = (LinkList)malloc(sizeof(LinkList));
		p->data = a;
		r->next = p;
		r = p;
	}
	r->next = '\0';
}
void Output(LinkList L) {
	Node *p;
	p = L;
	for (p = L; p->next != '\0'; p = p->next) {
		printf("%d ", p->next->data);
	}
	printf("\n");
}
void DealList(LinkList *L, int n) {
	Node *p, *q;
	p = (*L)->next;
	while (p->next !='\0') {
		q = p->next;
		p->next = q->next;
		q->next = (*L)->next;
		(*L)->next = q;
	}
}
int main(){
	int n;
	while (~scanf_s("%d", &n)) {
		if (n == 0)printf("list is empty");
		else {
			Node *L;
			CreatList(&L, n);
			Output(L);
			DealList(&L, n);
			Output(L);
		}
	}
	return 0;
}
/*#include<stdio.h>
int main() {
    int N, a[100000];
    while (~scanf_s("%d", &N)) {
        if (N == 0) {
            printf("list is empty\n");
            break;
        }
        else {
            int i;
            for (i = 0; i < N; i++) {
                scanf_s("%d", &a[i]);
            }
            for (i = 0; i < N; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            for (i = N - 1; i >= 0; i--) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/