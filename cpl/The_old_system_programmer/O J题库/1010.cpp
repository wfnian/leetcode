#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,s;
	scanf("%d",&a);
	if(a<=100000)
	 s=0.1*a;
	 else if(a<=200000&&a>100000)
	  s=10000+(a-100000)*0.075;
	  else if(a<=400000&&a>200000)
	   s=17500+(a-200000)*0.05;
	   else if(a<=600000&&a>400000)
	    s=27500+(a-400000)*0.03;
		else if(a<=1000000&&a>600000)
		 s=33500+(a-600000)*0.015;
		 else s=39500+(a-1000000)*0.01;
	    printf("%d",s);
	system("pause");
	return 0;
} 
