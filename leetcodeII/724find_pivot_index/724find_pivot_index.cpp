// 724find_pivot_index.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
//	int pivotIndex(vector<int>& nums) {
//		if (nums.size() < 1)
//			return -1;
//		if (nums.size() == 1)
//			return 0;
//		size_t i = 1,j = nums.size() - 2;
//		int sum1 = nums[0], sum2 = nums[j+1];
//		while (true)
//		{//{  1,1,1,1,1,0 }
//			if (i > j)
//				break;
//			if (sum1 == sum2&&i==j)
//				return i;
//			if (abs(sum1) > abs(sum2)) {
//				sum2 += nums[j];
//				j--;
//			}
//			else{
//				sum1 += nums[i];
//				i++;
//			}
//			if (sum1 == sum2&&i == j)
//				return i;
//		}
//		return -1;
//	}
//};
//class Solution {
//public:
//	int pivotIndex(vector<int>& nums) {
//		if (nums.size() < 1)
//			return -1;
//		if (nums.size() == 1)
//			return 0;
//		int mid = nums.size()/2-1;
//		int mid2 = mid;
//		while (true)//1,7,3,6,5,6
//		{
//			if (sum(nums, 0, mid) == sum(nums, mid + 1, nums.size()))
//				return mid;
//			else if(sum(nums, 0, mid) > sum(nums, mid + 1, nums.size()))
//				mid--;
//			else
//				mid++;
//			if (mid == 0 || mid >= nums.size() - 1)
//				return -1;
//
//			if (sum(nums, 0, mid2) == sum(nums, mid2 + 1, nums.size()))
//				return mid2;
//			else if (sum(nums, 0, mid2) > sum(nums, mid2 + 1, nums.size()))
//				mid2++;
//			else
//				mid2--;
//			if (mid2 == 0 || mid2 >= nums.size() - 1)
//				return -1;
//		}
//		return -1;
//	}
//	int sum(vector<int> nums1,int start,int end) {
//		int SUM = 0;
//		for (size_t i = start; i <end; i++)
//		{
//			SUM += nums1[i];
//		}
//		return SUM;
//	}
//};
class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		int ind = 0;int left = 0;int right = 0;
		if (nums.size() == 0) return -1;
		for (int i = 1; i < nums.size(); i++) right += nums[i];
		cout <<"left "<< left << "right " << right << endl;
		while (left != right && ind < nums.size() - 1) {
			left = left + nums[ind];
			right = right - nums[ind + 1];
			ind++;
		}
		if (left == right)
			return ind;
		return -1;
	}
};
int main()
{
	Solution s = Solution();
	vector<int> nums{ 1,7,3,6,5,6 };
	
	cout << s.pivotIndex(nums) << endl;
	Solution s1 = Solution();
	vector<int> nums1{ -1,-1,-1,-1,0,1 };

	cout << s1.pivotIndex(nums1) << endl;
    return 0;
}

