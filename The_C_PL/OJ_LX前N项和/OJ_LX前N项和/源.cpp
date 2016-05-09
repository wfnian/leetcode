/*题目描述
有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。 
输入
N
输出
数列前N项和
样例输入
10
样例输出
16.48
*/
#include<stdio.h>
int main() {
	double  a = 2.0, b = 0.0, c = 1.0, e = 0;
	int N;
	double s=0.0, v=2.0, f=0.0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		s +=s+a;
			printf("%lf  ", s);
		v +=v ;
		printf("%lf  ", v);
		f += s / v; 
		printf("%lf  ", f);
		printf("\n");
	}
	printf("%f\n", f);
}