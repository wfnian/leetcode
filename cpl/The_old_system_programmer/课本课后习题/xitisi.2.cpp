#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,n;
    float sum=0;
    scanf("%d",&n);
    while(i<=n)
    {   sum=sum+1.0/i;
         i++;
    }
    printf("%f",sum);
 system("pause");
 return 0;   
}
