#include<stdio.h>
int main()
{
	int a,b,i,sum=0;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	for(i=b;i<=a;i++)
	   if(i%2!=0)
	     sum=i+sum;
	   else
	    continue; 
	}
	else
	{for(i=a;i<=b;i++)
	   if(i%2!=0)
	     sum=i+sum;
	   else
	    continue;
	  }  
	  printf("%d",sum);
return 0;
}
