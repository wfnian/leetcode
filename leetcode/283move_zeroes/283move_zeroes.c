/*
283. Move Zeroes
Given an array nums, write a function to move all 0's to the
end of it while maintaining the relative order of the non-zero elements.
For example, given nums = [0, 1, 0, 3, 12], after calling
your function, nums should be [1, 3, 12, 0, 0].
Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/
#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {

}
int main() {
	int numsSize = 6;
	int nums[6] = { 0,1,7,12, 2,0 };
	int nums1[6];
	int i, j, temp, zero = 0;
	for (i = 0, j = 0; i < numsSize; i++) {
		if (nums[i] == 0) {
			zero++;
		}
		else {
			nums1[j] = nums[i];
			j++;
		}
	}
	for (i = numsSize - zero; i <numsSize; i++) {
		nums1[i] = 0;
	}
	for (i = 0; i < numsSize; i++) {
		nums[i] = nums1[i];
	}
	for (i = 0; i < numsSize; i++)
		printf("%d ", nums[i]);
}