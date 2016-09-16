#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
int main() {
	char str1[66] = "Hello,";
	char str2[66] = "World!\n";
	strcat(str1, str2);
	puts(str1);

	return 0;

}