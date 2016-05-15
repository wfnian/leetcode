/**
 * 返回一个正整数的翻转的结果，比如输入1234，输出4321
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n, result = 0;
	scanf("%d", &n);
	
	while (n) {
		m = n % 10;					//每次都是得到最低位上的数字
		result = result * 10 + m;
		n = n / 10;					//递归降位
	}
	
	printf("%d\n", result);
	
	return 0;
}