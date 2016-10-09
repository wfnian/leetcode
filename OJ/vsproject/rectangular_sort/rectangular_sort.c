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
1 1 1
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
#define MAXSIZE 10000
void Popo1(int R[MAXSIZE], int n) {
	int i, j, temp;
	for (i = 0; i<n; i++)
	{
		for (j = n - 1; j>0; j--)
		{
			if (R[j]<R[j - 1])
			{
				temp = R[j];
				R[j] = R[j - 1];
				R[j - 1] = temp;
			}
		}
	}
}

int main() {
	int n, i, m;
	int R[MAXSIZE];
	int B[MAXSIZE];
	int num, length, width, temp;
	int  count;
	while (scanf("%d", &n) != EOF) {
		scanf("%d", &m);
		for (i = 0; i < m; i++) {
			scanf("%d %d %d",&num,&length,&width);
			if (width > length) {
				temp = width;
				width = length;
				length = temp;
			}
			R[i] = num * 100 + length * 10 + width;
		}
		Popo1(R, m);
		count = m;
		int I, J;
		count = I = m - 1;
		while (I >= 0)
		{
			if (R[I] == R[I - 1])
			{
				for (J = I; J <= count; J++)
					R[J - 1] = R[J];
				count--;
			}
			I--;
		}
		for (i = 0; i <= count; i++) {
			printf("%d %d %d\n", R[i]/100, R[i]/10%10, R[i]%10);
		}
	}
	return 0;
}