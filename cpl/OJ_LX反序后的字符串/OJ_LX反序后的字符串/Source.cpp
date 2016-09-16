#include<stdio.h>
#include<string.h>
int main() {
	int Len;
	int i;
	char Str[22];
	while (scanf("%s", Str) != EOF) {
		Len = strlen(Str);
		for (i = Len-1 ; i >= 0; i--) {
			printf("%c", Str[i]);
		}
		printf("\n");
	}

	return 0;

}