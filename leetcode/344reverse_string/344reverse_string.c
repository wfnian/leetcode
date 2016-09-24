/*
344. Reverse String  
Write a function that takes a string as input and returns the string reversed.
Example:
Given s = "hello", return "olleh".*/

#include<stdio.h>
#include<string.h>
#include<malloc.h>
char* reverseString(char* s) {
	char *str = (char *)malloc((strlen(s)+1));
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		str[len - i - 1] = s[i];
	}
	str[len] = NULL;
	return str;
}
int main() {
	char *str = "hello";
	//puts(reverseString("hello"));
	char *str1=reverseString(str);
	puts(str1);
	free(str1);
	//reverseString("hello");
}