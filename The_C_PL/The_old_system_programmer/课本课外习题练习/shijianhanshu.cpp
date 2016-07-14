#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int a,b,c,d;
	srand(time(0));
	a=rand();
	b=rand()%1000;
	c=rand()%100;
	d=rand()%10;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n");
	printf("%d \n",a);
		printf("%d \n",b);
			printf("%d \n",c);
				printf("%d \n",d);
	system("pause");
	return 0;
} 
