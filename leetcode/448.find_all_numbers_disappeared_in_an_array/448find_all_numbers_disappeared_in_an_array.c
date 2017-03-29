/*
448. Find All Numbers Disappeared in an Array   Add to List
QuestionEditorial Solution  My Submissions
Total Accepted: 14582
Total Submissions: 25529
Difficulty: Easy
Contributors: yuhaowang001
Given an array of integers where 1 ¡Ü a[i] ¡Ü n (n = size of array),
some elements appear twice and others appear once.
Find all the elements of [1, n] inclusive that do not appear in this array.
Could you do it without extra space and in O(n) runtime? You may 
assume the returned list does not count as extra space.
Example:
Input:
[4,3,2,7,8,2,3,1]
Output:
[5,6]
*/

#include<stdio.h>
#include<malloc.h>
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
/*
"""
class Solution(object):
	def findDisappearedNumbers(self, nums):
		nums.sort()
		b  = list(range(1,len(nums)+1))
		Len = len(b)
		for i in range(len(b)):
			if b[i] in nums:
				b[i] = 0
		c = []
		for i in range(Len):
			if b[i]!=0:
				c.append(b[i])
		return c
*/
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
	int nums1[100];
	int *NUM = (int*)malloc(sizeof(int) * 30);
	for (int i = 1; i < numsSize + 2; i++) {
		nums1[i] = i;
	}
	for (int i = 0; i < numsSize; i++) {
		for (int j = 1; j <= numsSize; j++) {
			if (nums1[j] == nums[i]) {
				nums1[j] = 0;
			}
		}
	}
	int k = 0;
	for (int i = 1; i <= numsSize; i++) {
		printf("%d ", nums1[i]);
		if (nums1[i] != 0) {
			NUM[k] = nums1[i];
			k++;
		}
	}
	*returnSize = k;
	return NUM;

}
int main() {
	int *a = (int*)malloc(sizeof(int) * 100);
	int n;
	while (scanf("%d", &n)) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
	findDisappearedNumbers(a, n, n);
	}
}