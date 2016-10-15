/*
现在有很多长方形，每一个长方形都有一个编号，这个编号可以重复；还知道这个长方形的宽和长，编号、长、宽都是整数；现在要求按照一下方式排序（默认排序规则都是从小到大）；

1.按照编号从小到大排序

2.对于编号相等的长方形，按照长方形的长排序；

3.如果编号和长都相同，按照长方形的宽排序；

4.如果编号、长、宽都相同，就只保留一个长方形用于排序,删除多余的长方形；最后排好序按照指定格式显示所有的长方形；

输入
第一行有一个整数 0<n<10000,表示接下来有n组测试数据；
每一组第一行有一个整数 0<m<1000，表示有m个长方形；
接下来的m行，每一行有三个数 ，第一个数表示长方形的编号，

第二个和第三个数值大的表示长，数值小的表示宽，相等
说明这是一个正方形（数据约定长宽与编号都小于10000）；

输出
顺序输出每组数据的所有符合条件的长方形的 编号 长 宽

样例输入
1
8
1 1 1
3 1 9
1 1 2
1 2 1
1 2 2
2 1 1
2 1 2
2 2 1
样例输出
1 1 1
1 2 1
1 2 2
2 1 1
2 2 1
*/
#include<stdio.h>
#include<malloc.h>
#define MAX 10001
typedef struct {
	int num;
	int len;
	int wid;
}rectangular;
//void Popo1(rectangular rect[MAX], int n2) {
//	int i, j, temp;
//	for (i = 0; i < n2; i++)
//	{
//		for (j = n2 - 1; j > 0; j--)
//		{
//			if (rect[j].len < rect[j - 1].len)
//			{
//				temp = rect[j].len;
//				rect[j].len = rect[j - 1].len;
//				rect[j - 1].len = temp;
//			}
//		}
//	}
//} 
int main(){
	int n1, n2, i , j, temp;
	int num, len, wid;
	rectangular *rect[MAX],temp1[MAX];
	while (scanf_s("%d", &n1) != EOF) {
		scanf_s("%d", &n2);
		for (i = 0; i < n2; i++){
			scanf_s("%d %d %d", &num, &len, &wid);
			rect[i] = (rectangular*)malloc(sizeof(rectangular));
			rect[i]->num = num;
			if (len > wid) {
				rect[i]->len = len;
				rect[i]->wid = wid;
			}
			else {
				rect[i]->len = wid;
				rect[i]->wid = len;
			}
		}
		printf("_______________________________\n");
		for (i = 0; i < n2; i++)
		{
			for (j = n2 - 1; j > 0; j--)
			{
				if (rect[j]->num < rect[j - 1]->num)
				{
					temp = rect[j]->len;
					rect[j]->len = rect[j - 1]->len;
					rect[j - 1]->len = temp;
					/*temp1[0].num = rect[j].num;
					rect[j].num = rect[j + 1].num;
					rect[j + 1].num = temp1[0].num;*/
				}
			}
		}
		for (i = 0; i < n2; i++) {
			printf("%d %d %d\n", rect[i]->num, rect[i]->len, rect[i]->wid);
		}
	}
}
/*
for (i = 0; i < n2; i++) {
	printf("%d %d %d\n", rect[i].num, rect[i].len, rect[i].wid);
}
*/