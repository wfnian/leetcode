// 求一个数的位数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
void main()
{
	int x, sum = 0;
	scanf("%d", &x);
	while (x >= 1) {
		x = x / 10;
		sum++;
	}
	printf("%d\n", sum);
}
