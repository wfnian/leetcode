#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	if(a<=100000)
	 // b=0.1*a;
	  printf("%d",b);
	   //// else /*{
	   // if(a>100000&&a<=200000)
	//	b=10000+(a-100000)*0.75;
	//	printf("%d",b);
		else{
			if(a>200000&&a<=400000)
			b=17500+(a-200000)*0.05;
			printf("%d",b);
			else{
				if(a>400000&&a<=600000)
				b=27500+(a-400000)*0.03;
				printf("%d",b);
				else{
					if(a>600000&&a<=1000000)
					b=31500+(a-6000000)*0.015;
					printf("%d",b);
					else b=31500+(a-1000000)*0.001;*/
					printf("%d",b);
				}
			} 
		} 
	}
	return 0;
}
