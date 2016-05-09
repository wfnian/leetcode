#include<stdio.h>
int main() {
	int a, b, c, d;
	while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF) {
		if (a == b&&c != d) {
			printf("A\n");
		}
		if (a != b&&c == d) {
			printf("B\n");
		}
		if (a == b&&c == d&&b != c&&a != c&&b != d&&a != d) {
			if (a + b > c + d) {
				printf("A\n");
			}
			else printf("B\n");
		}
		if (a != b&&c != d) {
			if ((a + b) % 10 > (c + d) % 10) {
				printf("A\n");
			}
			else printf("B\n");
		}
		if (a == b&&b == c&&c == d)
			printf("N\n");
	}

	return 0;

}


2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26

#include<stdio.h>
#include<string.h>
int main()
{
	int a, b, c, d;
	while (scanf("%d %d %d %d", &a, &b, &c, &d)!=EOF){
		if (a == b&&c != d)printf("A\n");
		else if (a != b&&c == d)printf("B\n");
		else if (a == b&&c == d&&a>c)printf("A\n");
		else if (a == b&&c == d&&a<c)printf("B\n");
		else if (a != b&&c != d && (a + b) % 10<(c + d) % 10)printf("B\n");
		else if (a != b&&c != d && (a + b) % 10>(c + d) % 10)printf("A\n");
		else printf("N\n");
	}
	return 0;
}
