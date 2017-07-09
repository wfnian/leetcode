//////////////////////////////////////////////////////////////////////
/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
The algorithm should run in linear time and in O(1) space.
*/
//////////////////////////////////////////////////////////////////////
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"


int CountOfNums(int *nums, int numsSize, int ans) {
	int count = 0;
	for (size_t i = 0; i < numsSize; i++) 
		if (nums[i] == ans)
			count++;
	return count;
}

bool IsInNums(int *nums, int numsSize, int ans) {
	for (size_t i = 0; i < numsSize; i++) 
		if (nums[i] == ans)
			return true;
	return false;
}

int* majorityElement(int* nums, int numsSize, int* returnSize) {
	int size = 0;
	int *newnums = (int*)malloc(sizeof(int)*100000);
	for (size_t i = 0; i < numsSize; i++) {
		if (CountOfNums(nums, numsSize, nums[i]) >= (numsSize / 3)&&IsInNums(nums,numsSize,nums[i])==false)
			newnums[size++] = nums[i];
	}
	*returnSize = size;
	return newnums;
}

int main() {
	//majorityElement() //Time Limit Exceeded !!!

	return 0;
}
/*
*/