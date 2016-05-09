// 圆柱体的体积.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>

int main()

{

	double pi = 3.1415926;

	double r, h, S, V;

	scanf_s("%lf,%lf", &r, &h);      /*键盘输入圆半径r和高度h*/

	S =pi*r*r;                        /*计算圆面积S的值*/

	V = S*h;                    /*计算圆柱体体积V的值*/

	printf("S=%lf\n", S);

	printf("V=%lf\n", V);

		return 0;

}
