#include<stdio.h>
int main() {
	int xxzm(char str[22]);
	int m = 0;
	char a[22];
	gets(a);
	m = xxzm(a);
	printf("%d", m);

	return 0;

}
int xxzm(char str[22]) {
	int i;
	int n = 0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] <= 'z'&&str[i] >= 'a') {
			n++;
		}
	}
	return n;
}