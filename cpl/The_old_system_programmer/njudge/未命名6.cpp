#include<stdio.h>
int main()
{
	int n,a;
    scanf("%d",&n);
    if(n>=100&&n<=999)
       {a=n%10;
        printf("%d",a);}
    else printf("Error");
    return 0;
}
