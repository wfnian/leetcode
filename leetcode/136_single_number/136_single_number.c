/*
136. Single Number
Given an array of integers, every element appears twice 
except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. 
Could you implement it without using extra memory?
*/
#include<stdio.h>

//int singleNumber(int* nums, int numsSize) {
//	for (int i = 0; i < numsSize; i++) {
//		for (int j = 0; j < numsSize; ) {
//			if (nums[i] == nums[j] && i != j) {
//				j++;
//			}
//			else {
//				printf("%d\n", nums[i]);
//				return nums[i];
//			}
//		}
//	}
//}

int main() {
	int nums[22], numsSize;
	//num[8] = 0, 0, 2, 2, 4, 4, 6, 6, 7;
	//n = 8;
	//singleNumber(num, 9);
	scanf("%d", &numsSize);
	for (int i = 0; i < numsSize; i++) {
		scanf("%d ", &nums[i]);
	}
	for (int i = 0; i < numsSize; i++) {
		for (int j = 0; j < numsSize; ) {
			if (nums[i] == nums[j] && i != j) {
				j++;
			}
			else {
				printf("%d\n", nums[i]);
				return nums[i];
			}
		}
	}
}