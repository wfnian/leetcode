/*输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一
个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
输入
10个整数
输出
整理后的十个数，每个数后跟一个空格（注意最后一个数后也有空格）
样例输入
2 1 3 4 5 6 7 8 10 9
样例输出
1 2 3 4 5 6 7 8 9 10 */
#include<stdio.h>
int main() {
	int a[10], i, j;
	int Max, Min, Temp1 = 0, Temp2 = 0;
	for (i = 0; i < 10; i++) {
		scanf("%i", &a[i]);
	}
	Max = Min = a[0];
	for (i = 0; i < 10; i++) {
		if (a[i] > Max) {
			Max = a[i];
			Temp1 = i;
		}
		if (a[i] < Min) {
			Min = a[i];
			Temp2=i;
		}
	}
	
	Max = a[9];
	a[9] = a[Temp1];
	a[Temp1] = Max;

	Min = a[0];
	a[0] = a[Temp2];
	a[Temp2] = Min;
	for (i = 0; i < 10; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	return 0;
}