#include<stdio.h>
void main() {
	char s[128], *p;
	gets(s);
	for (p = s; *p != '\0'; p++) {
		if (*p >= 'A'&&*p <= 'Z') {
			printf("%c", *p);
		}
	}
}