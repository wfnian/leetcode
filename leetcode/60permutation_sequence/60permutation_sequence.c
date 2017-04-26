#include<stdio.h>
#include<malloc.h>
#define SWAP(a,b,t) do{t=a,a=b,b=t;}while(0)
int ans = 0;
char* perm(char *list, int i, int n) {//´Ói-->n
	char *goal = (char*)malloc(sizeof(char) * 100);
	int j, temp;
	if (i == n) {
		for (j = 0; j <= n; j++) {
			goal[j] = list[j];
		}
	}
	else {
		for (j = i; j <= n; j++) {
			SWAP(list[i], list[j], temp);
			perm(list, i + 1, n);
			SWAP(list[i], list[j], temp);
		}
	}
	puts(goal);
	return goal;
}
char* getPermutation(int n, int k) {
	int i, j = 0;
	char *list = (char*)malloc(sizeof(char)*100);
	char *getnew = (char*)malloc(sizeof(char)*100);
	for (i = 1; i <= n; i++) {
		list[j++] = i + '0';
	}
	char *st;
	st = perm(list, 0, n - 1);//n=4,k=4
	puts(st);
	int size = n*(k-1);
	for (j = 0; j < n; j++) {
		getnew[j] = st[size++];
	}
	
	getnew[j] = '\0';
	return getnew;
}

int main(void) {
	char *str;
	str = getPermutation(2,1);
	puts(str);
	return 0;
}