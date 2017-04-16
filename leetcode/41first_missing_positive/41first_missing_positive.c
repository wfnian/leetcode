#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}
int firstMissingPositive(int* nums, int numsSize) {
	if (numsSize == 0)
		return 1;
	if (numsSize == 1) {

		if (nums[0] == 1)
			return 2;
		return 1;
	}
	qsort(nums, numsSize, sizeof(nums[0]), cmp);
	for (int i = 1, j = 0; i < numsSize; i++) {
		if (nums[i] <= 0||nums[i]==nums[i-1])
			continue;
		j++;
		if (nums[i] != j)
			return j;
	}
	return;
}
int main() {
	int nums[5] = { 1, 0 };
	printf("%d\n", firstMissingPositive(nums, 2));
	return 0;
}
/*

class Solution(object):
def firstMissingPositive(self, nums):
"""
:type nums: List[int]
:rtype: int
"""
nums = list(set(nums))
a = []
for i in nums:
if i>0:
a.append(i)
lent = len(a)
if lent == 0:
return 1
if lent == 1:
if a[0] == 1:
return 2
return 1
a.sort()
for i in range(0,len(a)):
if (i+1)!= a[i]:
return i+1
return a[-1]+1
*/