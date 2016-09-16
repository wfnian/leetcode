#include<stdio.h>
int main ()
{
    int n,m,j;
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
        j=m*m;
        if(n!=j)
          if(m==n)
		   printf("FALSE");
		   else
		   continue;
       if(j==n)
       printf("TRUE");
       break;
	}
	
	return 0;
}
