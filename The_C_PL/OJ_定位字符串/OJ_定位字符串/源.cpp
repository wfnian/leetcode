#include<stdio.h>
#define NUM 22
int main() {
	char str1[NUM], str2[NUM], str3[NUM];
	int i, j, M;
	
	while (scanf("%s %s", &str1, &str2) != EOF) {
		int Len1 = 0, Len2 = 0;
		int N = 0;
		for (int lll = 0; str1[lll] != NULL; lll++)Len1++;
		for (int yyy = 0; str2[yyy] != NULL; yyy++)Len2++;
		
		for (i = 0; i < Len1; i++) {
			for (j = 0; j < Len2; j++) {
				if (str1[i + j] == str2[j])
					continue;
				else {
					break;
				}
			}
			if (j == Len2) {
				N = 2;
			}
			if(j == Len2) {
				M = (i + 1);
				for (int a = 0; a < M + Len2 - 1; a++) {
					str3[a] = str1[a];
				}
				str3[M + Len2 - 1] = NULL;
				puts(str3);
				printf("%d\n", M);
			}
			else;
		}
		if(N!=2)
			printf("%d\n",N);
		
		}
}
