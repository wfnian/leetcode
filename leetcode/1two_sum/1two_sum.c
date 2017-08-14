/*
1. Two Sum
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution.
Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
/*
3
3 2 4
6
*/
#include<stdio.h>
#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target) {
	int *returns = (int*)malloc(sizeof(int));
	int i, j, k = 0;
	for (i = 0; i < numsSize; i++) {
		for (j = 0; j < numsSize; j++) {
			if (nums[i] + nums[j] == target&&i!=j) {
				returns[k++] = i;
			}
		}
	}
	return returns;
}
int main() {
	int *numss = (int*)malloc(1000);
	int nums[100];
	int numsSize;
	int target;
	int i, k;
	scanf("%d", &numsSize);
	for (i = 0; i < numsSize; i++) 
		scanf("%d", &nums[i]);
	scanf("%d", &target);
	numss=twoSum(nums, numsSize, target);
	for (i = 0; i < 3; i++)
		printf("%d ", numss[i]);
	
	return 0;
	
}
