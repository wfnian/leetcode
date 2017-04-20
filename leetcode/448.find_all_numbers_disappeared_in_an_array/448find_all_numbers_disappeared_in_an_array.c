/*
448. Find All Numbers Disappeared in an Array
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
/**
* Return an array of size *returnSize.
* Note: The returned array must be malloced, assume caller calls free().
*/
#include<stdio.h>
#include<malloc.h>


int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
	qsort(nums, numsSize, sizeof(nums[0]), cmp);
	int *newnums = (int*)malloc(sizeof(int) * 10000);
	int newnum[100000];
	int count = 0, i, sum = 0,j = 0;
	for (i = 0; i < numsSize; i++) {
		if (nums[i] != i)
			newnums[count++] = nums[i];
	}
	for (i = 0; i < numsSize;j++, i++) {
		if (i+1 != newnums[i]) {
			newnum[sum++] = i + 1;
			printf("%d ", i+1);
			i++;
		}
		
	}
	return;
}
int main() {
	int *a = (int*)malloc(sizeof(int) * 100);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	findDisappearedNumbers(a, n, n);
}
/*
8
4 3 2 7 8 2 3 1
*/