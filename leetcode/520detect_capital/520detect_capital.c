#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h>
bool detectCapitalUse(char* word) {
	int Length = 0, Count = 0,count = 0,count1 = 0;
	Length = strlen(word);
	for (int i = 0; i < Length; i++) {
		if (word[i] <= 'Z'&&word[i] >= 'A')
			Count++;
		if (Count == Length)
			return true;
	}
	for (int i = 0; i < Length; i++) {
		if (word[i] <= 'z'&&word[i] >= 'a')
			count++;
		if (count == Length)
			return true;
	}
	for (int i = 1; i < Length; i++) {
		if (word[i] <= 'z'&&word[i] >= 'a')
			count1++;
		if (count1 +1 == Length&&word[0] <= 'Z'&&word[0] >= 'A')
			return true;
	}
	return false;
}
int main() {
	printf("%d\n", detectCapitalUse("USA"));
	printf("%d\n", detectCapitalUse("leetcode"));
	printf("%d\n", detectCapitalUse("FlaG"));
	printf("%d\n", detectCapitalUse("Flag"));

	return 0;
}