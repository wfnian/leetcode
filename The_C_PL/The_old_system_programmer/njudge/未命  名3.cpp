#include<stdio.h> 
int main()
{
	int i=1,sum=0,n;
	scanf("%d",&n);
	if(n>=1&&n<=100)
	 {
		while(i<=n)
		{
		//	sum+=n;
			i++;
			i=sum+(i*i+i)/2.0;
		//	i++;
			sum+=n;
		}
		printf("%d",sum);
	 }
	return 0;
}
