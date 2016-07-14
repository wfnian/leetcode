#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,sum;
	scanf("%d",&n);
	while(i<=n)
	{   
	    sum+=i;
	    i++;
		if(sum%10==7)
		 printf("%d\n",sum);
		else if(sum/7==0)
		 printf("%d\n",sum);
		else continue;
	}
	
	system("pause");
	return 0;
} 
