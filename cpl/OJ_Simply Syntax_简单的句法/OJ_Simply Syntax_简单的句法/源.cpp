//#include<stdio.h>
//#include<string.h>
//int main() {
//	char s[222];
//	int i, M = 0, N = 0, a, c = 0;
//	while (scanf("%s",s) != EOF) {
//		a = strlen(s);
//		for (i = 0; s[i] != '\0'; i++) {
//			if ((s[i] > 'p'&&s[i] < 'z')|| s[i] == 'N' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'I') {
//				M++;
//			}
//		}
//		if (a == M) {
//			c = 1;
//		}
//		for (i = 0; s[i] != '\0'; i++) {
//			if (s[i] == 's' || s[i] == 't') {
//				c = 1;
//				break;
//			}
//		}
//		if (c == 1) printf("YES\n");
//		if (c == 0) printf("NO\n");
//	}
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[257];
	int i, l, n;
	while (scanf("%s", a) != EOF)
	{
		l = strlen(a);
		n = l;
		for (i = l - 1; i >= 0; i--)
		{
			if ((a[i]<'p' || a[i]>'z') && a[i] != 'N'&&a[i] != 'C'&&a[i] != 'D'&&a[i] != 'E'&&a[i] != 'I')
			{
				n = 0;
				break;
			}
			else if (a[i] == 'N')
				n -= 1;
			else if (a[i] == 'C' || a[i] == 'D' || a[i] == 'E' || a[i] == 'I')
				n -= 2;
		}
		if (n == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	system("pause");
	return 0;
}
