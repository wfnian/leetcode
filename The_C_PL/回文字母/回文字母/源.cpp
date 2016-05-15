#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 22
int main() {
	char str[MAXSIZE];
	int ll = 0, N=0;
	while (gets_s(str)) {
		for (ll = 0; ll < (strlen(str) / 2); ll++) {
			printf("%c %c\n", str[ll], str[strlen(str) - ll-1]);
			if (str[ll] == str[strlen(str) - ll - 1]) {
				N++;
				//printf("%d ", N);
			}
		}
	}
}