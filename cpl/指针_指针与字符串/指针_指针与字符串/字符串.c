#include<stdio.h>
int main() {
	char str[128];
	int i=0,o;
	char *p;
	gets(str);
	for (p = str; *p != '\0'; p++) 
		if (*p <= '9'&&*p >= '0') 
			i++;
	printf("%d ", i);
	
}