#include<stdio.h> 
int main()
{
	int i=1,sum=0,n;
	scanf("%d",&n);
	if(n>0&&n<=100)
	  {while(i<=n)
	   {sum=sum+i;
	     i++;}
	   printf("%d",sum);}
	
	return 0;
}
