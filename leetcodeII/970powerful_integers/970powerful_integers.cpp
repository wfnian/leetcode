// 970powerful_integers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
/*
Example 1:

Input: x = 2, y = 3, bound = 10
Output: [2,3,4,5,7,9,10]
Explanation:
2 = 2^0 + 3^0
3 = 2^1 + 3^0
4 = 2^0 + 3^1
5 = 2^1 + 3^1
7 = 2^2 + 3^1
9 = 2^3 + 3^0
10 = 2^0 + 3^2
*/
class Solution {
public:
	vector<int> powerfulIntegers(int x, int y, int bound) {
		set<int> res;
		int p;
		if (x == y)
			p = sqrt(x);
		else p = (log10(bound) / log10(x > y ? x : y)) + 1;
		for (size_t i = 0; i < p + 2; i++)
		{
			for (size_t j = 0; j < p + 2; j++)
			{
				int m = pow(x, i) + pow(y, j);
				if (m <= bound && m > 0)
					res.insert(m);
			}
		}

		return vector<int>(res.begin(), res.end());
	}
};

int main() {
	Solution().powerfulIntegers(90, 90, 1000000);

	return 0;
}