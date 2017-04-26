#include<stdio.h>
#include<string.h>
#include<math.h>
#include<malloc.h>
"""
char str[100] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
char* convertToTitle(int n) {
	int size = 0;
	int i = 0, j, div = 0;
	char *target = (char *)malloc((1000) * sizeof(char));
	char *newTarget = (char*)malloc((1000) * sizeof(char));
	while (n) {
		div = n % 26;
		(div == 0) ? (target[size++] = str[25]) : (target[size++] = str[div - 1]);
		if (n % 26 == 0)
			n--;
		n /= 26;
	}
	target[size] = NULL;
	for (i = 0; i < size; i++) {
		newTarget[i] = target[size - 1 - i];
	}
	newTarget[size] = NULL;
	return newTarget;
}
int main() {

	char *s;
	s = convertToTitle(26);
	puts(s);
	free(s);
	char *S;
	S = convertToTitle(52);
	puts(S);
	free(S);
}"""