#include<stdio.h>
int  main()
{
	int n,i,x,a=0,b=0;
	scanf("%d\d",&n);
	for(i=1;i<=n;i++)
	  {
	  scanf("%d",&x);
	   if(x>=25)
	   a=a+5;
	   else
	   b=b+3;
       }
           
 	   printf("%d",a+b);     
        return 0;	   
}
