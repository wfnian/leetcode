//////////////////////////////////////////////////////////////////////
/*
Given an array of size n, find the majority element. 
The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority 
element always exist in the array.
*/
///所以排序，中間元素一定是題目所給要求
//////////////////////////////////////////////////////////////////////
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int majorityElement(int* nums, int numsSize) {
	qsort(nums, numsSize,sizeof(nums[0]),cmp);
	return nums[numsSize / 2];
}

/*
int major = nums[0], count = 1;		////another solution /but i don't understand~
	for (int i = 1; i<numsSize; i++) {    
		if (count == 0) {
			count++;
			major = nums[i];
		}
		else if (major == nums[i]) {
			count++;
		}
		else count--;
	}
	return major;
*/

int main() {
	int nums[10] = { 1,4,4,4,4,4,5,6,7 };
	printf("%d\n",majorityElement(nums, 9));

	return 0;
}