/////////////////////////////////////////////////////////////////////////////
/*
Suppose you have a long flowerbed in which some of the plots are planted 
and some are not. However, flowers cannot be planted in adjacent
plots - they would compete for water and both would die.

Given a flowerbed (represented as an array containing 0 and 1, 
where 0 means empty and 1 means not empty), and a number n, return if n new 
flowers can be planted in it without violating the no-adjacent-flowers rule.

简单来说就是 是否存在 0 0 0 构成 0 1 0 
*/
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
	if (flowerbedSize == 1)
		return flowerbed[0] != 0;
	int sum = 0;
	if (flowerbed[0] == 0 && flowerbed[1] == 0) {
		flowerbed[0] = 1;
		sum++;
	}
	if (flowerbed[flowerbedSize - 1] == 0 && flowerbed[flowerbedSize - 2] == 0)
	{
		flowerbed[flowerbedSize - 1] = 1;
		sum++;
	}
	for (size_t i = 1; i < flowerbedSize - 1; i++) {
		if (flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0) {
			sum++;
			flowerbed[i] = 1;
		}
		if (sum >= n)
			return true;
	}

	return (sum >= n)||n==0;
}

bool canPlaceFlowers1(int* flowerbed, int flowerbedSize, int n) {
	int sum = 0;
	for (size_t i = 0; i < flowerbedSize; i++)
	{

	}
}

int main() {
	/*int num[10] = { 1,0,0,0,1,1,1,1,1 };
	printf("%d\n", canPlaceFlowers(num, 9, 1));
	printf("%d\n", canPlaceFlowers(num, 9, 2));
	int nums[10] = {1,0,0,0,0,1};
	printf("%d\n", canPlaceFlowers(nums, 6, 2));*/
	int numss[4] = { 0,0,0,0};
	printf("%d\n", canPlaceFlowers(numss, 4, 3));
	int numsss[9] = { 1,0,1,0,1 };
	printf("%d\n", canPlaceFlowers(numsss, 5, 0));

}