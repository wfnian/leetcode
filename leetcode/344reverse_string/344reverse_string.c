/*
344. Reverse String  
Write a function that takes a string as input and returns the string reversed.
Example:
Given s = "hello", return "olleh".*/

#include<stdio.h>
#include<string.h>
char* reverseString(char* s) {
	char *str = NULL;
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		str[len - i - 1] = s[i];
	}
	str[len] = NULL;
	return str;
}
int main() {
	char **x;
	**x = reverseString("hello");
	puts(**x);
	//puts(reverseString("hello"));
	//reverseString("helloworld");
	//reverseString("hello");
}