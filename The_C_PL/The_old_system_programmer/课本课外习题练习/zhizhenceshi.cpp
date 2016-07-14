#include <stdio.h>
int fib(int n)
{
    int *p;
    if(n==0)
        return(0);
    else if(n==1)
    return(1);
    else
    return(fib(n-1)+fib(n-2));
}
int main()
{
    int n,s[40],i,t=0;
    double ave=0,sum=0;
    int*paa;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s[i]=fib(i);
    for(i=1;i<=n;i++)
    {
        if(s[i]%2==0)
        {
            sum+=s[i];
            i++;
            t++;
        }

    }
    ave=sum/t;
    printf("%d %.2f",t,ave);
    return 0;
}
