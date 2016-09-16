/*一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
输入
M N
输出
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
样例输入
1000 5
样例输出
31.25 2875.00*/
#include<stdio.h>
int main() {
	float M, Sum;
	int N, i;
	while (~scanf("%f %i", &M, &N)) {
		Sum = 2*M;
		for (i = 0; i < N; i++) {
			M = M / 2.0;
			Sum +=  M;
		}
		printf("%.2f %.2f\n", M, Sum-3*M);
	}
}