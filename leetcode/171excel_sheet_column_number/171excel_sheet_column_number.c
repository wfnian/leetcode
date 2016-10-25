/*
171. Excel Sheet Column Number   QuestionEditorial Solution  My Submissions
Total Accepted: 103975
Total Submissions: 233982
Difficulty: Easy
Contributors: Admin
Related to question Excel Sheet Column Title

Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
*/
#include<stdio.h>
#include<string.h>
int titleToNumber(char* s) {
	int n = strlen(s), sum = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (i == n - 1) {
			sum += s[n - i - 1] - 64;
		}
		else sum += s[n - i - 1] - 64 + 25;
	}
	return sum;
}
int main() {
	char s[10];
	while (1) {
		gets(s);
		int n = strlen(s), sum = 0;
		int i;
		for (i = 0; i < n; i++) {
			if (i == n - 1) {
				sum += s[n  - 1] - 64;
			}
			else sum += 26 * (s[i] - 64);
			//sum += /*s[n - i - 1] - 64 +*/ 25 * (s[n - i - 1] - 64);
			//sum += (n - i - 1) * 26*(s[n - i - 1] - 64);
		}
		printf("%d\n", sum);
	}
}
