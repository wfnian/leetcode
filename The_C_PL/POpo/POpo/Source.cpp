#include<stdio.h>
//int main()
//{
//	int a[5];
//	int n[5] = { 0,1,2,3,4};
//	int i, j, t;
//	printf("请输入有5个数的数组：");
//	for (i = 0; i<5; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	for (j = 0; j<5; j++)
//		for (i = 0; i<5 - j - 1; i++)
//			if (a[i]>a[i + 1])
//			{
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//				n[j] = n[i + 1];
//			}
//	printf("排序后的数组为：\n");
//	for (i = 0; i<5; i++)
//		printf("%d ", a[4 - i]);
//	printf("\n元素在原数组中的下标是：\n");
//	for (i = 4; i >= 0; i--)
//	{
//		printf("%d ", n[i]);
//	}
//	return 0;
//}
int main() {
	int a[5][2] = { NULL,NULL,NULL,NULL,NULL,1,2,3,4,5};
	int i, j;
	for (i = 0; i < 5; i++) {
		scanf("%i", &a[i][2]);
	}
}
