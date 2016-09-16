#include<stdio.h>
#include<stdlib.h>
int main()
{  int a,n,i=1,sum=a;
   scanf("%d %d",&a,&n);
   while(i<=n)
    {
    	 i++;
        i=i*10;
        sum=a+i*a;
       // sum=sum+sum;
       
    }
    printf("%d",sum);
   system("pause");
   return 0;    
}
