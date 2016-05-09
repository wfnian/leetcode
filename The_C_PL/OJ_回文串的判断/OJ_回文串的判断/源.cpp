//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i, j;
//	char s1[22], s2[22], s3[22];
//	int a, b, c;
//	while (scanf("%s", s1) != EOF) {
//		a = strlen(s1);
//		/*if (a == 1) {
//			printf("YES\n");
//			break;
//		}
//		else if (a % 2 == 0 && a != 1) {
//			b = a / 2;
//			for (i = 0; i < b; i++) {
//				s2[i] = s1[i];
//			}
//			s2[b] = '\0';
//			puts(s2);*/
//			for (i = a - 1, j = 0; i >= (a) / 2; i--, j++) {
//				s3[j] = s1[i];
//				//	s3[a] = '\0';
//				puts(s3);
//			}
//		//}
//
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char s[100];
//	int a=0, n;
//	scanf("%d", &n);
//	for (int i = 0; i < n;i++){
//	scanf("%s", s);
//		int num = strlen(s);
//		for (int i = 0; i < num / 2; i++) {
//			if (s[i] != s[num - 1 - i]) {
//				a = 1;
//			}
//		}
//		if (a == 1 ) printf("NO\n");
//		else printf("YES\n");
//	}
//	
//	return 0;
//
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
		int c = 0, a = 0, i;
		char ch[1000];
		scanf("%s", &ch);
		a = strlen(ch);
		for (i = 0; i<a; i++)
		{
			if (ch[i] != ch[a - i - 1])
				c++;
		}
		if (c == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

