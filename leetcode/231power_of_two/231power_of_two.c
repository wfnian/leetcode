/*
231. Power of Two  QuestionEditorial Solution  My Submissions
Total Accepted: 99782
Total Submissions: 258920
Difficulty: Easy
Given an integer, write a function to determine if it is a power of two.

Credits:
Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPowerOfTwo(int num) {
	int temp = 0;
	int i;
	if (num >65536 && num % 2 == 0)
		(num) = num / 65536;
	for (i = 0; i<30; i++) {
		if (pow(2, i) == num)
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
		a = isPowerOfTwo(num);
		printf("%d\n", a);
	}
}