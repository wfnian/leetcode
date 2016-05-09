#include<stdio.h>
int main() {
	char Str1[100], Str2[100],Str3[100];
	
	while (scanf("%s %s", Str1, Str2) != EOF) {
		int i, j, N = 0, M = 0;
		for (i = 0; Str1[i] != NULL; i++) {
			N++;
		}
		for (i = 0; Str2[i] != NULL; i++) {
			M++;
		}
		int N1, M1;
		N1 = N;
		M1 = M;
		for (i = 0; i < N1; i++) {
			Str3[i] = Str1[i];
		}
		for (i = 0, j = N1; i < M1; j++, i++) {
			Str3[j] = Str2[i];
		}
		int LEN=0;
		Str3[N1 + M1] = NULL;
		for (i = 0; Str3[i] != NULL; i++) {
			LEN++;
		}
		if (LEN > 100)
			printf("Result String is cutted.\n");
		else 
		puts(Str3);
	}
}