#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
int findfirst(char s1[], char s2[]) {
	int i = 0, j = 0;
	int len1, len2;
	len1 = strlen(s1);
	len2 = strlen(s2);
	int M = 1;
	for (i = 0; i <= len1; ++i) {
		for (j = 0; j < len2; j++) {
			if (s1[i + j] == s2[j]) {
			
				continue;
				
			}
			else
				break;
		}
		if (j == len2) {
			return (i + 1);
		}
	}
	return 0;
}
int main() {
	char str1[99], str2[99];
	int pos;
	while(scanf("%s %s",str1,str2)!=EOF){
		pos = findfirst(str1, str2);
		printf("%d\n", pos);
	}
	return 0;
}