// OJ_升级版跑跑卡丁车.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



#include<stdio.h>
int main() {
	int a, b, c, d, num = 0, n;
	scanf_s("%d:%d", &a, &b);
	scanf_s("%d:%d %d", &c, &d, &n);
	num = c * 60 + d - (a * 60 + b) + n * 20;
	printf("%d", num);

	return 0;

}


