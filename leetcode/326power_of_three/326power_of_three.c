/*
326. Power of Three
Given an integer, write a function to determine if it is a power of three.
Follow up:
Could you do it without using any loop / recursion?
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPowerOfThree(int num) {
	int temp = 0;
	int i;
	for (i = 0; i<20; i++) {
		if (pow(3, i) == num)
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
		a = isPowerOfThree(num);
		printf("%d\n", a);
	}
}
