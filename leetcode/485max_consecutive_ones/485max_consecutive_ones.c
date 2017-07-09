////////////////////////////////////////////////////////////
/*485max_consecutive_ones
Given a binary array, find the maximum number of consecutive 1s in this array.
Example 1:
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
The maximum number of consecutive 1s is 3.
*/
/////////////////////////////////////////////////////////////
#include<stdio.h>
#include <stdbool.h>

bool isOneIn(int *nums,int numsSize){
	for (size_t i = 0; i < numsSize; i++) 
		if (nums[i])
			return true;
	return false;
}

int findMaxConsecutiveOnes(int* nums, int numsSize) {
	int max = 0, ans = 0;
	for (size_t i = 1; i < numsSize; i++) {
		if (nums[i - 1] == 1 && 1 == nums[i])
			ans++;
		else 
			ans = 0;
		if (max < ans)
			max = ans;
	}
	return isOneIn(nums, numsSize) ? max + 1 : max;
}

int main()
{
	int nums[10] = { 0,0};
	printf("%d\n", findMaxConsecutiveOnes(nums, 2));//0
	int nums1[10] = { 1,1,0,1,1,1 };
	printf("%d\n", findMaxConsecutiveOnes(nums1, 6));//3
	int nums2[10] = { 0 };
	printf("%d\n", findMaxConsecutiveOnes(nums2, 1));//0
	int nums3[10] = { 1 };
	printf("%d\n", findMaxConsecutiveOnes(nums3, 1));//1
}