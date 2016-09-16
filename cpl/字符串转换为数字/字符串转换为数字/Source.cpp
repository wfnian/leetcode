/*
题目：九进制转换，将输入的九进制数字转换成16进制输出。
输入：若干用空格隔开的数字字符串，字符串只由0-8数字构成，长度不大于10
输出：对每个数字字符串输出一个十六进制数，每个一行，
需输出前缀0X，十六进制中的ABCDEFG用大写格式。
代码如下，请修正后提交：
#include <stdio.h>
int to_int(const char* a) {
    int p = 0;
    int i;
    for (i = 0; a[i]!=0; i++) {
        p = p * 9 + a[i];
    }
    return p;
}
int main() {
    char s[11];
    while (scanf("%s", s) != EOF) {
        printf("0X%X\n", to_int(s));
    }
    return 0;
输入
若干用空格隔开的数字字符串，字符串只由0-8数字构成，长度不大于10
输出
对每个数字字符串输出一个十六进制数，每个一行，需输出前缀0X，
十六进制中的ABCDEFG用大写格式。
样例输入
123
样例输出
0X66*/
#include <stdio.h>
int to_int(const char* a) {
	int p = 0;
	int i;
	for (i = 0; a[i] != 0; i++) {
		p = p * 9 + a[i];
	}
	return p;
}
int main() {
	char s[11];
	while (scanf("%i", s) != EOF) {
		printf("0X%x\n", to_int(s));
	}
	return 0;
}