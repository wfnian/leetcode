#include<stdlib.h>
#include<stdio.h>
int main(){
    int a,b;
    int i,j,k;
    scanf("%d %d",&a,&b);
    float m;
    int fun(int a,int b,int sum,int diff,int product,float divide);
    fun(a,b,i,j,k,m);
    printf("%d %d %d %f",i,j,k,m);
}
int fun(int a, int b, int  sum, int  diff, int  product,float  divide){
    sum=a+b;
    diff=a-b;
    product=a*b;
    divide=a/b;
    return sum,diff,product,divide;
}
