#include<stdio.h>
#include<string.h>
int main() {
	char Str1[120],Str2[120],Str3[120];
	int i, j;
	int LenthStr1,LenthStr2,LenthStr3;
	while (scanf("%s %s", Str1, Str2) != EOF) {
		LenthStr1 = strlen(Str1);
		LenthStr2 = strlen(Str2);
		for (i = 0; Str1[i] != NULL; i++) {
			Str3[i] = Str1[i];
		}
		for (i = 0, j = LenthStr1; Str2[i] != NULL; j++, i++) {
			Str3[j] = Str2[i];
		}
		Str3[LenthStr1 + LenthStr2] = NULL;
		LenthStr3 = strlen(Str3);
		if (LenthStr3 > 100)
			printf("Result String is cutted.\n");
		else puts(Str3);
	}
	return 0;
}
//#include<stdio.h>
//int m(char a[], char A);
//int main() {
//	char c[30];
//	char b;
//	gets_s(c);
//	scanf("%c", &b);
//	m(c, b);
//	return 0;
//}
//int m(char M[], char B) {
//	int i, j;
//	char newa[29];
//	for (j = 0, i = 0; M[i] != '\0'; i++)
//		if (M[i] != B)
//			newa[j++] = M[i];
//	newa[j] = '\0';
//	puts(newa);
//}