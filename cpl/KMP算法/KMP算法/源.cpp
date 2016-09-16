#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 44
int KMP(char a[], char b[]) {
	int i = 0, j = 0;
	int len1 = strlen(a);
	int len2 = strlen(b);
	for (i = 0; i < len1 - len2; ++i) {
		for (j = 0; j < len2; j++) {
			if (a[i + j] == b[j]);
				continue;
			 break;
		}
		if (j == len2) {
			return (i + 1);
			printf("%i ", i + 1);
		}
	}
}

int main() {
	char a[MAXSIZE], b[MAXSIZE];
	int pos;
	gets_s(a);
	gets_s(b);
	printf("%d",KMP(a, b));
	return 0;
}