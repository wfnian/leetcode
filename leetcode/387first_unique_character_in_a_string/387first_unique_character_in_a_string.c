/*
Given a string, find the first non-repeating character 
in it and return it's index. If it doesn't exist, return -1.
Examples:
s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
*/
#include<stdio.h>
#include<string.h>
int firstUniqChar(char* s) {
	int i, j, sum;
	int len = strlen(s);
	for (i = 0; i < len; i++) {
		sum = 0;
		for (j = 0; j < len; j++) {
			if (s[j] == s[i] && i != j) {
				sum++;
				if (sum != 0) break;
			}
		}
		if (sum == 0) 
			return i;
	}
	return -1;
}
int main() {
	char s[100];
	while (gets(s) != NULL) {
		printf("%d\n", firstUniqChar(s));
	}
}