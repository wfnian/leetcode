// 27remove_element.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		vector<int> ans;
		for (size_t i = 0; i < nums.size(); i++)
			if (val != nums[i])
				ans.push_back(nums[i]);
		nums.swap(ans);
		return nums.size();
	}
};

int main()
{
    return 0;
}

