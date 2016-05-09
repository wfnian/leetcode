#include<stdio.h>
int main() {
	char s[22], k, n;
	printf("请输入字符串：\n");
	gets(s);
	printf("请输入你要查找的字母：\n");
	scanf("%c", &k);
	int flag=0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == k) {
			n = k - 32;
			flag = 1;
		}
	}
	if (flag == 1) {
		printf("找到了！%c", n);
	}
	else printf("没找到！");

	return 0;

}
