#include<Windows.h>
#include<stdio.h>
int main() {
	THREAD_GET_CONTEXT;
	printf("please wait!");
	for (int i = 0; i < 36; i++) {
		printf(" .");
		Sleep(200);
	}
}