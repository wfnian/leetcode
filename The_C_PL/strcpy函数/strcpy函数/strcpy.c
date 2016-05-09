#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char str1[22] = "Hello,";
	char str2[22] = "world!\n";
	strcpy(str1, str2);//½«str2¸³Öµ¸østr1£»
	puts(str1);

	return 0;

}