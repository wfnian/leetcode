// 238product_of_array_except_self.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {// https://dwz.cn/Oh6SELIX  图解
		vector<int>fwd(nums.size(), 1), bwd(nums.size(), 1);
		for (size_t i = 1; i < nums.size(); i++)
			fwd[i] = nums[i-1] * fwd[i - 1];
		
		for (int  i = nums.size()-2; i >= 0; i--)
			bwd[i] = nums[i+1] * bwd[i + 1];
		
		for (size_t i = 0; i < nums.size(); i++)
			fwd[i] = fwd[i] * bwd[i];
		
		return fwd;
	}

};

int main()
{
	vector<int>a{1, 2, 3, 4};

	Solution().productExceptSelf(a);

    std::cout << "Hello World!\n"; 
}

