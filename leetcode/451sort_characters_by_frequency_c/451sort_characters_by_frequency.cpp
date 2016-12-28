#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct strs {
	int b;
	char c;
}STR;
char ALPHA[95] = { 'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M','`','1','2','3','4','5','6','7','8','9','0','-','=','~','!','@','#','$','%','^','&','*','(',')','_','+','[',']','{','}',':',';','"','\'','<','>','.','?','/','|','\\',',',' ' };
char NEW[110101];
//{'1','2','3','4','5','6','7','8','9','0'}
STR M[700011], NUM[701011], MF;
char* frequencySort(char* str) {
	int len;
	len = strlen(str);
	int i, j;
	for (i = 0; i < 95; i++) {
		M[i].b = 0;
		M[i].c = 0;
	}
	for (i = 0; i < len; i++)
		for (j = 0; j < 95; j++)
			if (str[i] == ALPHA[j]) {
				M[j].b++;
				M[j].c = ALPHA[j];
			}
	for (j = 0, i = 0; i < 95; i++) {
		if (M[i].b != 0) {
			NUM[j++] = M[i];
		}
	}
	int VV = j;
	for (i = 0; i<VV; i++)
	{
		for (j = 0; j<VV - i - 1; j++)
		{
			if (NUM[j].b<NUM[j + 1].b)
			{
				MF = NUM[j];
				NUM[j] = NUM[j + 1];
				NUM[j + 1] = MF;
			}
		}
	}
	len = 0;
	int y = VV;
	for (i = 0; i < y; i++) {
		for (j = 0; j < NUM[i].b; j++) {
			NEW[len++] = NUM[i].c;
		}
	}
	NEW[len] = NULL;
	return NEW;
}
int main() {
	char *str = (char*)malloc(sizeof(char));
	printf("\\");
	while (gets_s(str, sizeof(char) * 100)) {
		frequencySort(str);
		puts(NEW);
	}
}
