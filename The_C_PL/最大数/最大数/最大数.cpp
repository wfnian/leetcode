// ×î´óÊý.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<stdio.h>
#define Maxx if (a>b&&a>c) Maxx = a;if (c>b&&c>a) Maxx = c;if (b>c&&b>a) Maxx = b;
int FoundMax(int a, int b, int c) {
	int Max;
	if (a>b&&a>c) Max = a;
	if (c>b&&c>a) Max = c;
	if (b>c&&b>a) Max = b;
	return Max;
}
int main() {
	float a, b, c, Max;
	scanf_s("%f %f %f", &a, &b, &c);
	Max = FoundMax(a, b, c);
	printf("%.3f\n", Max);
	printf("%.3f\n", Max);
}
