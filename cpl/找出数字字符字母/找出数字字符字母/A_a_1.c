#include<stdio.h>
int main() {
	char str[36];
	int i, j;
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] <= '9'&&str[i] >= '0') {
			printf("%c", str[i]);
		}
	}
	printf("\n");
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] <= 'Z'&&str[i] >= 'A') {
			printf("%c", str[i]);
		}
	}
	printf("\n");
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] <= 'z'&&str[i] >= 'a') {
			printf("%c", str[i]);
		}
	}
	printf("\n");
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] < '0'||str[i]>'9'&&str[i]<'A'||str[i]>'Z'&&str[i]<'a'||str[i]>'z') {
			printf("%c", str[i]);
		}
	}
	printf("\n");


	return 0;

}