#include<stdio.h>
#include<string.h>
int main() {
	char str1[22];// = "Hello,linux!";
	char str2[22] = "Hello,linux!";
	gets(str1);
	int a;
	a=strcmp(str1, str2);
	printf("%d\n", a);

	return 0;

}