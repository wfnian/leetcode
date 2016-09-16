#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b,c, i;
	float sum1=0;
		scanf("%d %d %d", &a, &b,&c);
		for (i = 1; i <=a; i++)
			sum1 += i;
	     for (i= 1; i <=b; i++)
		   sum1 += i*i;
	      for (i = 1; i <=c; i++)
		sum1 += 1.0 / i;
	printf("%.2f", sum1  );
	//	printf("%-.2f",sum3);
	//	printf("%")
	system("pause");
	return 0;
}
