#include <stdio.h>
#include <string.h>
int main() {
	char s1[30], s2[30], s3[30];
	while (scanf("%s%s%s", s1, s2, s3) != EOF) {
		if (strcmp(s3, strcat(s1, s2))) {
			printf("%s\n", s3);
		}
		else if (strcmp(s2, strcat(s1, s3))) {
			printf("%s\n", s2);
		}
		else if (strcmp(s1, strcat(s2, s3))) {
			printf("%s\n", s1);
		}
		else {
			printf("no\n");
		}
	}
	return 0;
}