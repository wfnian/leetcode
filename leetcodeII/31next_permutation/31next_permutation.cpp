// 31next_permutation.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
//next_permutation() 返回下一个排列，注意是下一个，所以排序一下就可以产生所有的排列。
using namespace std;

class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		next_permutation(nums.begin(), nums.end());
	}
};
int main()
{
	//as same as before 46.permutations
	//used STL-> algorithm -> next_permutation()
    return 0;
}

