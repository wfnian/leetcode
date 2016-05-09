/*

题目：最大值和最小值，四个整数a、b、c、d，求a的低四位和b的低四位中的最大值与c、d中最小值的乘积

输入：多组数据，每组数据四个整数a、b、c、d

输出：对每组数据输出计算出的乘积，每组数据一行

代码如下，请修正后提交

#include <stdio.h>

#define max(a,b) a > b ? a : b

#define min(a,b) a < b ? a : b

int main() {

int a,b,c,d,e;

while(scanf("%d%d%d%d",&a,&b,&c,&d) != EOF) {

printf("%d\n",max(a&0xF,b&0xF)*min(c,d));

}

return 0;
}


输入


多组数据，每组数据四个整数a、b、c、d


输出


对每组数据输出计算出的乘积，每组数据一行


样例输入

1 2 3 4

样例输出

6*/
#include <stdio.h>
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b
int main() {
	int a, b, c, d, e;
	while (scanf("%d%d%d%d", &a, &b, &c, &d) != EOF) {
		printf("%d\n", max(a & 0xF, b & 0xF)*min(c, d));
	}

	return 0;
}