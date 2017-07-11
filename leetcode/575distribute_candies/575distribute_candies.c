///////////////////////////////////////////////////////////////////
/*
We can use a set to count all unique kinds of candies, but even all 
candies are unique, the sister cannot get more than half.
对于长度是2n的数组，妹妹可以获得n个糖果，如果糖果种类m小于n ，
则其必然能获得m种糖果。如果m大于等于n，则其最多是在m种糖果里选择n种获得。
所以妹妹最多可以获得min（m，n）种糖果。
*/
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool isInCandies(int* candies, int candiesSize,int target) {
	for (size_t i = 0; i < candiesSize; i++) 
		if (target == candies[i])
			return true;
	return false;
}

int distributeCandies(int* candies, int candiesSize) {
	int array[2000],kinds = 0;
	for (size_t i = 0; i < candiesSize; i++) 
		if (!isInCandies(array, kinds, candies[i]))
			array[kinds++] = candies[i];
	return kinds < candiesSize / 2 ? kinds : candiesSize / 2;
}

int main() {
	int nums[10] = { 1,1,1,1 };
	printf("%d\n", distributeCandies(nums, 4));
}