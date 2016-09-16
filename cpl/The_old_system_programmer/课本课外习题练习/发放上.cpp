#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,m,n,cun,bei;
	scanf("%d %d",&m,&n);
	a=m*n;
	if(m<n)
	cun=m;
	m=n;
	n=cun;
	while(n!=0)
	{
	    cun=m%n;
	    m=n;
	    n=cun;
	}
	bei=a/m;
	printf("%d %d",m,bei);
	return 0;
}

