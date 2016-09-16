/*写一函数，将两个字符串中的元音字母复制到另一个字符串，然后输出。
输入
一行字符串
输出
顺序输出其中的元音字母（aeiuo）
样例输入
abcde
样例输出
ae
*/
#include<stdio.h>
/*char change(char str[]) {
	char chastr[22];
	int i, len = 0, j;
	for (j=0,i = 0; str[i] != NULL; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o') {
			len++;
			chastr[j] = str[i];
			j++;
		}
	}
	chastr[len] = NULL;
	printf("%s\n", chastr);

	return 0;
}*/
int main() {
	char str[222];
	scanf("%s", str);
	char chastr[222];
	int i, len = 0, j;
	for (j = 0, i = 0; str[i] != NULL; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o') {
			len++;
			chastr[j] = str[i];
			j++;
		}
	}
	chastr[len] = NULL;
	printf("%s\n", chastr);
	return 0;
}
	
