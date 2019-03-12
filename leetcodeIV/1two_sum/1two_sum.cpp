// 1two_sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class _Solution {//我所能做到的最好
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>res;
		for (size_t i = 0; i < nums.size() - 1; i++)
		{
			for (size_t j = 1; j < nums.size(); j++)
			{
				if (i < j && nums[i] + nums[j] == target)
				{
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
		}
		return res;
	}
};

class Solution { //高级解法，哈希表，find函数
public:
	vector<int> twoSum(vector<int> &numbers, int target)
	{
		//Key is the number and value is its index in the vector.
		unordered_map<int, int> hash;
		vector<int> result;
		for (int i = 0; i < numbers.size(); i++) {
			int numberToFind = target - numbers[i];

			//if numberToFind is found in map, return them
			if (hash.find(numberToFind) != hash.end()) { // 指向键等于 key 的元素的迭代器。若找不到这种元素，则返回尾后（见 end() ）迭代器。
				//+1 because indices are NOT zero based
				result.push_back(hash[numberToFind] + 1);
				result.push_back(i + 1);
				return result;
			}

			//number was not found. Put it in the map.
			hash[numbers[i]] = i;
		}
		return result;
	}
};

int main()
{
	vector<int>nums{ 2, 7, 11, 15 };
	Solution().twoSum(nums, 9);
	std::cout << "Hello World!\n";
}
