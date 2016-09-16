#include<stdio.h>
int main() {
	char str[10];
	int i, j = 0;
	for (i = 0; i < 10; i++) {
		scanf("%c", &str[i]);
	}
	for (i = 0; i < 10; i++) {
		if (str[i] <= '9'&&str[i] >= '0')
			j++;
	}
	printf("%d \n", j);
	return 0;
	
}