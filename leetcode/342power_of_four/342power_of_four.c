/*
342. Power of Four
https://leetcode.com/problems/power-of-four/
Given an integer (signed 32 bits), write a function to check whether it is a power of 4.
Example:
Given num = 16, return true. Given num = 5, return false.
Follow up: Could you solve it without loops/recursion?
Credits:
Special thanks to @yukuairoy for adding this problem and creating all test cases.
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPowerOfFour(int num) {
	int temp = 0;
	int i;
	if (num >= 4 * 4 * 4 * 4 * 4 * 4 * 4 * 4 * 4 * 4 * 4)	//num=pow(num,-4);
		num = num / 65536;
	for (i = 0; i<num; i++) {
		if (pow(4, i) == num)
		{
			return true;
			break;
		}
		temp++;
	}
	if (temp == num) {
		return false;
	}
	return 0;
}

int main() {
	int num;
	int a;
	while (1) {
		scanf("%d", &num);
		a = isPowerOfFour(num);
		printf("%d\n", a);
	}
}