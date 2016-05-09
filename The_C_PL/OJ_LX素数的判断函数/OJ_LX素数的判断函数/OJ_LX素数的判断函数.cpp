// OJ_LX素数的判断函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int prime(int *a) {
	int i;
	for (i = 2; i < *a; i++) {
		if (*a%i == 0) {
			return -1;
			break;
		}
		else return 1;
	}
}
int main()
{	
	int x;
	scanf_s("%d", &x);
	int b=prime(&x);
	if (b == -1) printf("not prime\n");
	else printf("prime\n");
    return 0;
}

