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
#include<math.h>
#include<malloc.h>

char str[27] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
int titleToNumber(char* s) {
	int i, j;
	int lens = strlen(s), lenstr = strlen(str);
	int sum = 0;
	for (i = 0; i < lens; i++) {
		for (j = 0; j < lenstr; j++) {
			if (s[i] == str[j])
				sum += (j + 1)*pow(26, lens - i - 1);
		}

	}
	printf("%d", sum);
	return sum;
}
int main() {
	while (1) {
		char N[100];
		scanf("%s", N);
		titleToNumber(N);
	}

}
