#include<stdio.h>
int main(){
	int i,n;
	float a,sum=0, aver;
	printf("Please input 10 number:\n");
	for (i = 0; i < 10; i++) {
		scanf("%f", &a);
		if (a >= 0)
			sum = sum + a;
		else continue;
	}
	printf("%.2f\n", sum);

	return 0;
}