/////////////////////////////////////////////////////
/*
Given an unsorted array of integers, find the length 
of longest continuous increasing subsequence.
*/
/////////////////////////////////////////////////////
#include<stdio.h>

int findLengthOfLCIS(int* nums, int numsSize) {
	if (numsSize == 1)
		return 1;
	int maxLen = 1, temp = 0;
	for (size_t i = 1; i < numsSize; i++) {
		if (nums[i] > nums[i - 1])
			maxLen++;
		if (temp < maxLen)
			temp = maxLen;
		if (nums[i] <= nums[i - 1])
			maxLen = 1;
	}
	return temp;
}

int main() {
	int nums1[8] = { 1,3,5,4,2,3,4,5 };		//测试用例
	int nums2[5] = { 2,2,2,2,2 };			//测试用例
	printf("%d\n", findLengthOfLCIS(nums1, 8));
	printf("%d\n", findLengthOfLCIS(nums2, 5));
}

//注意maxLen初始值为一，特殊情况是numsSize = 1