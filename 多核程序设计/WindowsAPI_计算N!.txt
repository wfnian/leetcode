#include"stdio.h"
#include<Windows.h>
#include"iostream"
#include"string.h"

#define MAXSIZE 20000
#define MAXSIZE 5

using namespace std;
DWORD WINAPI ThreadFunc(PVOID pvParam) {

	return 0;
}

int main() {
	int i;
	long long sum = 1;
	HANDLE hand2 = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
	for (i = 1; i <= MAXSIZE; i++)
	{
		sum = i*sum;
	}
	printf("%lld\n", sum);

	return 0;

}