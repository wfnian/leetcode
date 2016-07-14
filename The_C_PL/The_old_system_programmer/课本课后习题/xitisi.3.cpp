#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,n;
    float pi=4.0/3.0,sum=1;
    scanf ("%d",&n);
    while(i<=n)
    {
        sum=sum*((2.0*i)*(2.0*i)/((2.0*i-1)*(2.0*i+1)));
        i=i+1;
    }
    pi=sum*2;
    printf("%f",pi);
system("pause");
return 0;    
}
