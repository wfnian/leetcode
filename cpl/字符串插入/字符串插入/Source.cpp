#include<stdio.h>
int main() {
	char Str1[127],Str2[127],Str3[127], Elem;
	int N;
	while (scanf("%s %s %i", Str1, Str2, &N) != EOF) {
		int i, j;
		int S1 = 0, S2 = 0;
		for (i = 0; Str1[i] != NULL; i++) {
			S1++;
		}
		for (i = 0; Str2[i] != NULL; i++) {
			S2++;
		}
		for (i = 0; i < N-1; i++) {
			Str3[i] = Str1[i];
		}
		for (i = 0, j = N-1; Str2[i] != NULL; j++, i++) {
			Str3[j] = Str2[i];
		}
		for (i = N-1 + S2, j =  N-1; i < S1 + S2; j++, i++) {
			Str3[i] = Str1[j];
		}
		Str3[S1 + S2] = NULL;
		puts(Str3);
	}

	return 0;
}
