// 0001_two_sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;

		for (int i = 0; i < nums.size(); i++)
		{
			int deduct = target - nums[i];
			for (int j = 0; j < nums.size(); j++) {
				if (j != i && deduct == nums[j])
				{
					res.push_back(j);
				}
			}
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

