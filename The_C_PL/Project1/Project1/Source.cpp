#include <stdio.h>
#include <string.h>
int main() {
	char s1[30], s2[30], s3[30];
	while (scanf_s("%s%s%s", s1, s2, s3) != EOF) {
		if (strcmp(s3, strcat_s(s1, s2))) {
			printf("%s\n", s3);
		}
		else if (strcmp(s2, strcat_s(s1, s3))) {
			printf("%s\n", s2);
		}
		else if (strcmp(s1, strcat_s(s2, s3))) {
			printf("%s\n", s1);
		}
		else {
			printf("no\n");
		}
	}
	return 0;
}