///*题目描述
//题目：求一个字符在一个字符串里的位置
//输入：多组数据，每组一行，包括一个字符c和一个字符串s，
//用空格分隔，字符c从字母中选择，字符串s长度不超过10
//输出：对每组数据输出一个整数，字符第一次出现在字符串的下标，
//若不存在输出-1，每个数字一行
//程序代码如下，请修正后提交
//#include <stdio.h>
//int find_in_string(const char* s, char c) {
//    int i;
//    for (i = 0; s[i]; i++) {
//        if (s[i] == c)
//            return i;
//    }
//    return -1;
//}
//int main() {
//    char c, s[11];
//    while (scanf("%c%s", &c, s) != EOF) {
//        printf("%d\n", find_in_string(s, c));
//    }
//    return 0;
//输入
//多组数据，每组一行，包括一个字符c和一个字符串s，用空格分隔，字符c从字母中选择，字符串s长度不超过10
//输出
//对每组数据输出一个整数，字符第一次出现在字符串的下标，若不存在输出-1，每个数字一行
//样例输入
//a abcdefg
//样例输出
//0*/
//#include <stdio.h>
//#include<string.h>
//int find_in_string( char s[],char c) {
//	int i, j = 0, a;
//	a = strlen(s);
//	for (i = 0; s[i]!='\0'; i++) {
//		if (s[i] != c)
//			j++;
//	}
//	if (j == a) {
//		return -1;
//	}
//	else return j;
//}
//int main() {
//	char c, s[11];
//	while (1) {
//		scanf("%c%s", &c, s);
//		printf("%d\n", find_in_string(s, c));
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main() {
	char s[22], s1;
	int j=0;
	int i = 0;
	while (~scanf("%c", &s1)) {
		scanf("%s", s);
		for (; s[i] != '\0'; i++) {
			if (s[i] != s1) {
				j++;
			}
			else break;
		}
		if (j == strlen(s)) {
			printf("-1\n");
		}
		else printf("%d\n", i);
	}
}