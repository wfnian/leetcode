#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
Given a non-empty integer array of size n, find the minimum number of 
moves required to make all array elements equal, where a move is 
incrementing n - 1 elements by 1.

有趣的数学问题。
*/

class Solution {
public:
	int minMoves(vector<int>& nums) {
		auto _min = min_element(nums.begin(), nums.end());
		int steps = 0;
		for (size_t i = 0; i < nums.size(); i++)
			steps += nums[i] - *_min;
		return steps;
	}
};

int main()
{
	Solution s;
	vector<int>a({ 1,2,3 });
	cout << s.minMoves(a);

	return 0;
}

