// 747largest_number_greater_than_twice_of_others.cpp: 定义控制台应用程序的入口点。
/*
In a given integer array nums, there is always exactly one largest element.
Find whether the largest element in the array is at least twice as much as
every other number in the array.
If it is, return the index of the largest element, otherwise return -1.
*/

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	int dominantIndex(vector<int>& nums) {
		int max = nums[0];
		int index = 0;
		for (size_t i = 0; i < nums.size(); i++)
			if (nums[i] > max) {
				max = nums[i];
				index = i;
			}
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
				continue;
			if (max%nums[i] != 0)
				return -1;
		}
		return index;
	}
};

int main()
{
	Solution solution;
	vector<int> nums{ 1,2,3,4 };
	cout << solution.dominantIndex(nums);
	return 0;
}



