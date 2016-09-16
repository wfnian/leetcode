#include<stdio.h>
#include<string.h>
int main() {
	char s[220];
	int i, a = 0, b = 0, c = 0, d = 0, e;
	gets_s(s);
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] <= 'z'&&s[i] >= 'a' || s[i] <= 'Z'&&s[i] >= 'A')
		a++;
	}
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ')
		b++;
	}
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] <= '9'&&s[i] >= '0')
		c++;
	}
	e = strlen(s);
	d = e - a - b - c;
	printf("%d %d %d %d\n", a, c, b, d);
}