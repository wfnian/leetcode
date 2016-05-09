#include<stdio.h>
#define N 3
typedef struct {
	char name[20];
	float slary;
}in;
int main() {
	in s[N];
	int i;
	float sum=0.0, aver;
	for (i = 0; i < N; i++) {
		scanf("%s %f", s[i].name, &s[i].slary);
	}
	for (i = 0; i < N; i++) {
		sum += s[i].slary;
	}
	aver = sum / N;
	printf("%f\n", aver);

	return 0;

}