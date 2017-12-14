//#include"C:\Program Files (x86)\Windows Kits\10\Include\10.0.14393.0\ucrt\stdio.h"
//#include"C:\Program Files (x86)\Windows Kits\10\Include\10.0.14393.0\ucrt\corecrt.h"
//#include"C:\Program Files (x86)\Windows Kits\10\Include\10.0.14393.0\ucrt\corecrt_wstdio.h"
//#include<cstdio>
#include <cstdio>
int prim(int n) {
	for (int i = 2; i < n; i++)
		if (n%i == 0)
			return 0;
	return 1;
}
int num[1000] = { 0,};
int *MAIN() {
	int k = 0;
	int i;
	for (i = 2; i < 499979; i++)
		if (prim(i) == 1)
			num[i-2] = k++;
	return num;
}
int countPrimes(int n) {
	int *nu = MAIN();
	return nu[n];
}


int main() {
	printf("%d ", countPrimes(100));//2,3,5,7
}