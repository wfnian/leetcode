#include<stdio.h>
int main() {
	char str1[22], str2[22], str3[44];
	gets_s(str1);
	gets(str2);
	int i,j, m = 0, n = 0;
	for (i = 0; str1[i] != '\0'; i++) {
		m++;
	}
	for (i = 0; str2[i] != '\0'; i++) {
		n++;
	}
	for (i = 0; i < m; i++) {
		str3[i] = str1[i];
	}
	for (j = m, i = 0; j < m + n, str2[i] != '\0'; i++, j++) {
		str3[j] = str2[i];
	}
	str3[m + n] = '\0';
	puts(str3);
}