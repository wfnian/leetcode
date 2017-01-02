/*
Given an array of numbers nums, in which exactly two elements appear 
only once and all the other elements appear exactly twice. Find the
two elements that appear only once.
For example:
Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].
Note:
The order of the result is not important. So in the above 
example, [5, 3] is also correct.
Your algorithm should run in linear runtime complexity. Could you 
implement it using only constant space complexity?
*/
#include<stdio.h>
#include<malloc.h>
#include<string.h>
/*
for i in range(LEN):
for j in range(LEN):
if nums[i]==nums[j] and i!=j:
b[i] = 1
b[j] = 1
c = []
Len1 = len(b)
for i in range(Len1):
if b[i]==0:
c.append(nums[i])
*/
int* singleNumber(int* nums, int numsSize, int* returnSize) {
	int nums1[1000];
	int nums2[1000],k = 0;
	memset(nums1, 0, sizeof(nums1));
	for (int i = 0; i < numsSize; i++) 
		for (int j = 0; j < numsSize; j++) 
			if (nums[i] == nums[j] && i != j) {
				nums1[i] = 1;
				nums1[j] = 1;
			}
	for (int i = 0; i < numsSize; i++) {
		if (nums1[i] == 0) {
			nums2[k] = nums[i];
			k++;
		}
	}
	returnSize = &k;
	return nums2;
}
int main() {
	int *a = (int*)malloc(sizeof(int) * 100);
	int n;
	while (scanf("%d",&n)) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		singleNumber(a, n, n);
	}
}