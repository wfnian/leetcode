// 908smallest_rang_I.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int smallestRangeI(vector<int>& A, int K) {
		int small = A[0], big = A[0];
		for (size_t i = 0; i < A.size(); i++)
		{
			if (A[i] > big) big = A[i];
			if (A[i] < small) small = A[i];
		}
		
		if (big-small<K*2) return 0;
		return big - small - K * 2;
	}
};

int main()
{
    std::cout << "Hello World!\n"; 
}

