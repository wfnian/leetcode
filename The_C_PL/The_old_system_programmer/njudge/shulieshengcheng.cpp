#include<stdio.h>
int main()
{
	int i,j,N,s=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	  {
	   if(i==1)
	    j=1;
	   if(i>1)
	    j=i*2+j;
		s=s+j;
	    printf("%d\n",j);
	  }
	  printf("%d",s);
	  return 0;
}
