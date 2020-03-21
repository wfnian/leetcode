// 0001_two_sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &nums, int target) {
		int i(0), j(0);
		vector<int> res;
		for (i = 0; i < nums.size(); i++)
			for (j = 0; j < nums.size(); j++)
				if (i != j && (nums[i] + nums[j] == target)) {
					res.push_back(i);
					//cout << i << " ";
				}
		return res;
	}
};

int main()
{
	vector<int>nums{ 2, 7, 11, 15 };
	Solution().twoSum(nums, 9);
    std::cout << "Hello World!\n"; 
}

