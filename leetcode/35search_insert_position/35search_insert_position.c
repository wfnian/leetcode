#include<stdio.h>
//Wrong 
int searchInsert(int* nums, int numsSize, int target) {
	int left = 0, right = numsSize, middle;
	if (target > nums[numsSize-1])
		return numsSize;
	while (left<=right)
	{
		middle = (left + right) / 2;

		if (nums[middle] > target)
			right = middle - 1;
		else if (nums[middle] < target)
			left = middle + 1;
		else return middle ;
	}
	return 0;
}
//暴力法
int searchInsert(int* nums, int numsSize, int target) {
	if (numsSize == 0) return 0;

	for (int i = 0; i < numsSize; i++) {
		if (nums[i] >= target) return i;
	}
	return numsSize;
}
//大神的代码
int searchInsert(int* nums, int numsSize, int target) {
	if (numsSize == 0) return 0;

	// bsearch
	int beg = 0, end = numsSize - 1;
	while (beg <= end) {
		int mid = (beg + end) >> 1;
		if (nums[mid] >= target) end = mid - 1;
		else beg = mid + 1;
	}
	return end + 1;
}
int main(void) {
	int array[10] = { 1,3 };
	printf("%d\n", searchInsert(array, 2, 2));
	int array1[10] = { 1 };
	printf("%d\n", searchInsert(array1, 1, 1));
}