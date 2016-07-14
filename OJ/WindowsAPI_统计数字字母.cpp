#include"stdio.h"
#include<Windows.h>
#include"iostream"
#include"string.h"

#define MAXSIZE 20000

using namespace std;
DWORD WINAPI ThreadFunc(PVOID pvParam) {
	
	return 0;
}
int main(){
	FILE*fp;
	fp = fopen("¹ØÓÚÃüÃû.txt", "r");
	if (fp == NULL) {
		cout << "FIEL NOT OPEN!" << endl;
		exit(0);
	}
	else {
		char str[MAXSIZE];
		int j = 0;
		char c;
		while (!feof(fp)) {
			fread(&c, 1, 1, fp);
			str[j++] = c;
		}
		DWORD Number = 0, Letters = 0;
		DWORD dwResult = 0;
		int i;
		for (i = 0; i < strlen(str); i++) {
			HANDLE hand1 = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
			if (str[i] <= '9'&&str[i] >= '0')
				Number++;
			HANDLE hand2 = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
			if (str[i] <= 'z'&&str[i] >= 'a' || str[i] <= 'Z'&&str[i] >= 'A')
				Letters++;
		}
		printf("The digital number is %d\nThe letters number is %d\n", Number, Letters);
	}
	return (0);

}
