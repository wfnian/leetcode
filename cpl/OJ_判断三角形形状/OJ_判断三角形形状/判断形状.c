#include<stdio.h>
int main() {
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a + b > c&&a + c > b&&b + c > a) {
			if (a == b&&b == c) {
				printf("DB\n");
			}
			else if (a == b &&b != c || a == c&&c != b || b == c &&c != a) {
				printf("DY\n");
			}
			else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
				printf("ZJ\n");
			}
			else if (a != b&&b != c)
				printf("PT\n");
		}
		else printf("ERROR\n");
	}
	return 0;
}