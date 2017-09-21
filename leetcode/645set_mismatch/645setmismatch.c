// 645setmismatch.cpp: 定义控制台应用程序的入口点。
//
/*//////////////////////////////////////////////////////////////////
The set S originally contains numbers from 1 to n. But unfortunately, 
due to the data error, one of the numbers in the set got duplicated 
to another number in the set, which results in repetition of one
number and loss of another number.

Given an array nums representing the data status of this set after
the error. Your task is to firstly find the number occurs twice and
then find the number that is missing. Return them in the form of an array.

Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]
//////////////////////////////////////////////////////////////////*/
#include "stdafx.h"

/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/

int binarySearch(int *nums,int left,int right,int target) {
	int mid = (left + right) / 2;
	while (nums[mid] != target) {
		if (nums[mid] < target)
			mid = (mid+1 + right) / 2;
		if (nums[mid] < target)
			mid = (left + mid - 1) / 2;
	}
	return mid;
}

int* findErrorNums(int* nums, int numsSize, int* returnSize) {

}

int main()
{
	printf("a\t\n");
    return 0;
}

