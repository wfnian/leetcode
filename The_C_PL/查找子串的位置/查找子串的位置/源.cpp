/*3组字符串，每组字符串占一行。每行包含由空格分隔的两个字符串，字符串仅由英文小写字母组成且长度不大于100。3组字符串，每组字符串占一行。每行包含由空格分隔的两个字符串，字符串仅由英文小写字母组成且长度不大于100。
输出
每组数据输出2行，第一行是S中每次比较的字符，第二行是后一个字符串在前一个字符串中的位置，如果不匹配，则输出0。
样例输入
string str
thisisalongstring isa
nosubstring subt
样例输出
str
1
thisisisa
5
nosubsubsttring
0*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 44

typedef char DataType;
typedef int Status;
typedef struct {
	char str[MAXSIZE];
}*String;

Status Strlength(String S) {
	int i = 0, len = 0;
	for (i = 0; S->str[i] != NULL; i++) {
		len++;
	}
	return len;
}

Status Strcomper(String Sub, String T) {
	int a;
	a = strcmp(Sub->str, T->str);
	return a;
}

String SubString(String Sub, String S, int i, int m) {
	int j;
	for (j = i; j < m; j++) {
		Sub->str[j] = S->str[j];
	}
	Sub->str[m] = NULL;
	
	return Sub;

}
Status Index(String S,String T, int pos) {
	int n, m, i;
	String Sub;
	if (pos > 0) {
		n = Strlength(S);
		m = Strlength(T);
		i = pos;
		while (i <= n - m + 1) {
			Sub = SubString(Sub, S, i, m);
			if (Strcomper(Sub, T) != 0) {
				++i;
			}
			else return i;
		}
	}
	return 0;
}
int main() {

	String S, T;
	while (gets_s(S->str) != NULL) {
		gets_s(T->str);
		Index(S, T, 0);
	}
	
	return 0;
}
