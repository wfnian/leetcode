/*Given an integer array nums, find the contiguous 
subarray(containing at least one number) which has 
the largest sum and return its sum.

Example:
Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4],
	Output : 6
	Explanation : [4, -1, 2, 1] has the largest sum = 6.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {//理解得不是很好
public:
	int maxSubArray(vector<int>& nums) {
		int dp[1000];// = new int(nums.size());
		dp[0] = nums[0];
		int res = nums[0];
		for (size_t i = 1; i < nums.size(); i++)
		{
			dp[i] = nums[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
			res = max(dp[i], res);
		}
		return res;
	}
};

int main() {
	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
	Solution s;
	cout << s.maxSubArray(nums);

	int a;
	cin >> a;
	
	return 0;
}