/*
422. Valid Word Square 
Given a sequence of words, check whether it forms a valid word square.

A sequence of words forms a valid word square if the kth row and column read the exact same string, where 0 ¡Ü k < max(numRows, numColumns).

Note:
The number of words given is at least 1 and does not exceed 500.
Word length will be at least 1 and does not exceed 500.
Each word contains only lowercase English alphabet a-z.
*/
#include<stdio.h>
#include<stdbool.h>
bool validWordSquare(char** words, int wordsSize) {
	int i;
	for (i = 0; i<wordsSize; i++) {
		printf("%s", words[i]);
	}
}
int main() {
	//	char words[4] = { "abcd","bnrt","crmy","dtye" };
	printf("HELLO");
}