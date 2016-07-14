#include<stdio.h> 
int main()
{
	int i,sum=0,m,n;
	scanf("%d %d",&m,&n);
	i=m;
    if(n<=200&&m<=n&&m>=1)
	 {
	   while(i<=n)
	   {if(i%2==0)
	   sum+=i;
	     i++;}
	   printf("%d",sum);}
	else ;
	return 0;
}
