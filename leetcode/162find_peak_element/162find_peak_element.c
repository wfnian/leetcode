#include<stdio.h>
#include<limits.h>
int findPeakElement(int* nums, int numsSize) {
	if (numsSize>2) {
		if (nums[numsSize - 1]>nums[numsSize - 2])
			return numsSize - 1;
		if (nums[0]>nums[1])
			return 0;
		for (int i = 1; i < numsSize - 1; i++) {
			if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
				return i;
		}
	}
	else if (numsSize == 2) {
		if (nums[0]>nums[1])
			return 0;
		else return 1;
	}
	return 0;
}
int main() {

	return 0;
}