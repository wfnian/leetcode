// 50pow(x,_n).cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

class SolutionV1 {
public:
	double myPow(double x, int n) {
		double res = 1.0;
		if (n>=0)
		{
			for (size_t i = 0; i < n; i++)
			{
				res *= x;
			}
		}
		else
		{
			for (size_t i = 0; i < -n; i++)
			{
				res *= x;
			}
			res = 1.0 / res;
		}
		return res;
	}
};
class SolutionV2 {
public:
	double myPow(double x, int n) {
		if (n == 0)
			return 1;
		if (n < 0) {
			n = -n;
			x = 1 / x;
		}
		return (n % 2 == 0) ? pow(x*x, n / 2) : x * pow(x*x, n / 2);
	}
};
class Solution {//Version 3
public:
	double myPow(double x, int n) {
		if (n == 0) return 1;
		double t = myPow(x, n / 2);
		if (n % 2) {
			return n < 0 ? 1 / x * t*t : x * t*t;
		}
		else {
			return t * t;
		}
	}
};


int main()
{
	cout << Solution().myPow(2.000000, 10) << endl;
	cout << Solution().myPow(2.100000, 3) << endl;
	cout << Solution().myPow(2.000000, -2) << endl;
	cout << Solution().myPow(2.000000, 1) << endl;
	cout << Solution().myPow(-100.000000, -22222222222) << endl;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
