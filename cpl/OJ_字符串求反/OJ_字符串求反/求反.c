#include<stdio.h>
#include<string.h>
//int main() {
//	char s[11], c[11];
//	int a = 0, i;
//	scanf("%s", s);
//	for (i = 0; s[i] != '\0'; i++) {
//		a++;
//	}
//	printf("%d\n", a);
//	//for (i = 0; i < a;i++) {
//	//	/*c[i] = s[a-i];*/
//	//	//s[a-1] = '\0';
//	//	printf("%c", s[i]);
//	//}
//	puts(c);
//}
int main() {
	char str[100], ch;
	int i, j, k = 0;
	gets(str);
	for (i = 0; str[i] != '\0'; i++) {
		k++;
	}
	printf("%d\n", k);
	for (i = 0, j = k - 1; i < k / 2; i++, j--) {
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
	puts(str);

	return 0;

}