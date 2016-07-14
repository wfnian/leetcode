#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 0
#define ERROR -1
typedef int Status;
typedef int DataType;
typedef char **HuffmanCode;

typedef struct {
	unsigned int weight;
	unsigned int parent, rchild, lchild;
}HTNode, *HuffmanTree;

void HuffmanCoding(HuffmanTree *HT, HuffmanCode *HC, int *w, int n) {
	if (n <= 1)
		return;
	int m = 2 * n - 1;
	*HT = (HuffmanTree)malloc((m + 1)*sizeof(HTNode));
	HuffmanTree P;
	int i;
	for (P = (*HT), i = 1; i <= n; ++i, ++P, ++w) {
		P->weight = *w; P->parent = P->lchild = P->rchild = 0;
	}
	for (; i <= m; ++i, ++P)(P)->parent = 0;


}