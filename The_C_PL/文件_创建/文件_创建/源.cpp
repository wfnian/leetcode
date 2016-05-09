#include<stdio.h>
int main() {
	FILE*fp;
	char c;
	fp = fopen("f:\\程序语言设计\\Visual Studio 2015下程序设计语言\\文件_创建\\新文件.txt", "w");
	fclose(fp);
	return 0;
}