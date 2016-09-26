/*
LeetCode OJ
//本题网址：https://leetcode.com/problems/palindrome-number/
9. Palindrome Number
Question
Determine whether an integer is a palindrome. Do this without extra space.
click to show spoilers.
*/
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<math.h>
#define MAXSIZE 2222

//方法一，看作是字符串处理
int main() {
	int pnumber;
	char str1[MAXSIZE];
	gets(str1);
	if (str1[0] == '-') {//首先判断是不是负数/是负数
		int temp1 = 0;
		for (int i = 1, j = strlen(str1) - 1; i < (((strlen(str1)) / 2) + 1); j--, i++) {
			//如果是负数，从第一个和最后一个开始比较是否相同
			if (str1[i] == str1[j]) {
				temp1++;
			}
		}
		if (temp1 == strlen(str1) / 2) {
			printf("true\n");
		}
		else printf("false\n");
	}
	else {//不是负数
		int temp2 = 0;
		for (int a = 0, b = strlen(str1) - 1; a < (strlen(str1) / 2); b--, a++) {
			if (str1[a] == str1[b]) {
				temp2++;
			}
		}
		if (temp2 == strlen(str1) / 2) {
			printf("true\n");
		}
		else printf("false\n");
	}


	return 0;
}

////方法二，看作数字
//int isPalindrome(int a) {
//	long  n = 0, temp;
//	if (a == 0)
//		goto loop;
//	temp = a;
//	while (a != 0) {
//		n += a % 10;
//		a /= 10;
//		n *= 10;
//	}
//
//	if (temp == n / 10) {
//		printf("true\n");
//	loop:	return -1;
//	
//	}
//	else {
//		printf("false\n");
//		return 0;
//	}
//
//}
//
//int main() {
//	isPalindrome(0);
//	isPalindrome(121);
//	isPalindrome(-121);
//	isPalindrome(1234);
//	isPalindrome(123321);
//
//	return 0;
//}