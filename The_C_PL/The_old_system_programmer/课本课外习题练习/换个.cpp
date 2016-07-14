#include<stdio.h>
void fu(int a,int b,int *sum,int *diff,int *product,float *divide)
{
    *sum=a+b;
    *diff=a-b;
    *product=a*b;
    *divide=a*1.00/b;
}    
int main()
{
    int m,n,sum,diff,product;
    float divide;
    scanf("%d %d",&m,&n);
    fu(m,n,&sum,&diff,&product,&divide);
    printf("%d %d %d %.2f",sum,diff,product,divide);
    return 0;
}
