#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool isPalindrome(int n) {
	char str[1000];
	itoa(n, str, 10);
	int len = strlen(str);
	int i, j = len - 1, m = 0;
	for (i = 0; i < len - 1; i++) {
		if (str[i] == str[j--])
			m++;
	}
	if (m == len - 1)
		return true;
	return false;
}
char* nearestPalindromic(char* n) {
	int less = atoi(n) - 1;
	int more = atoi(n) + 1;
	char str[1000];
	while (true) {
		if (isPalindrome(less)) { itoa(less, str, 10); return  str; }
		if (isPalindrome(more)) { itoa(more, str, 10); return  str; }
		--less;
		++more;
	}
}
int main() {
	printf("%s\n", nearestPalindromic("1095500901"));

}