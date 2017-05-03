/*Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.
Example 1:
Input:nums = [1, 1, 1], k = 2
Output : 2
*/
#include<stdio.h>

int subarraySum(int* nums, int numsSize, int k) {

	int ans = 0, sum = 0;
	int i, j;
	for (i = 0; i < numsSize; i++) {
		sum = 0;
		for (j = i; j < numsSize; j++) {
			sum += nums[i];
			if (sum == k) {
				ans++;
				break;
			}
		}
	}
	return ans;
}