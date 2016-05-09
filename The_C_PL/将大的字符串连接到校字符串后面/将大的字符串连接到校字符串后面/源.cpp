#include<stdio.h>
#include<string.h>
int main() {
	char str_1[22], str_2[22];
	gets_s(str_1);
	gets_s(str_2);
	int i, a;
	a = strcmp(str_1, str_2);
	if (a < 0) {
		strcat(str_1, str_2);
		puts(str_1);
	}
	else {
		strcat(str_2, str_1);
		puts(str_2);
	}

}