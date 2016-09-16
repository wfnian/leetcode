#include<stdio.h>
#include<string.h>
int main() {
	char str[222];
	gets_s(str);
	int i, a, b, c,h=0;
	c = strlen(str);
	for (i = 0; str[i]!= '\0'; i++) {
		a = str[i];
		b = str[i + 1];
		if (a==b) {
			printf("%c\n", str[i+1]);
			break;
		}
		h++;
	}
	if(h==c) printf("No\n");
	return 0;

}