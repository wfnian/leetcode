/*
For example,
Given s = "Hello World",
return 5.
*/
#include<stdio.h>
#include<string.h>
int lengthOfLastWord(char* s) {
	int Len = strlen(s);
	int length = 0, ans;
	if (Len == 0)
		return 0;
	for (int i = Len - 1; i >= 0; i--) {
		if (s[i] != ' ') {
			ans = i;
			break;
		}
	}
	for (int i = ans; i >= 0; i--) {
		if (s[i] == ' ')
			break;
		length++;
	}
	return length;
}
int main() {
	printf("%d\n", lengthOfLastWord("Hello World"));
	printf("%d\n", lengthOfLastWord("b a "));
	printf("%d\n", lengthOfLastWord("kmk     "));

}