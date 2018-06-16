#include <iostream>
#include <vector>

/*
Given an array with n objects colored red, white or blue, 
sort them in-place so that objects of the same color are 
adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent 
the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:
Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

using namespace std;
class Solution {
public:
	void sortColors(vector<int>& nums) {
		int r(0), g(0), b(0);
		for (auto var : nums)
			if (var == 0)
				r++;
			else if (var == 1)
				g++;
			else
				b++;

		for (size_t i = 0; i<nums.size(); i++)
			if (i<r)
				nums[i] = 0;
			else if (i<r + g)
				nums[i] = 1;
			else
				nums[i] = 2;

	}
};



int main() {
	vector<int> nums = { 2,0,2,1,1,0 };
	Solution().sortColors(nums);
	
	return 0;
}