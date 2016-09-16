// 中间数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#define MAXSIZE 222

int main()
{
	int a[MAXSIZE];
	int i = 0, j = 0, n = 0;
	int N;
	scanf_s("%d", &N);
	for (i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < N; i++) {
		for (j = 1; j < i; j++) {
			if (a[j] > a[j + 1]) {
				n = a[j];
				a[j] = a[j + 1];
				a[j + 1] = n;
			}
		}
	}
	printf("%i\n", a[N / 2]);
    return 0;
}

