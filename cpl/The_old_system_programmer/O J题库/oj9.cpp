#include "stdio.h"
int main()
{
    int x,a,b,c,d,e,n,j;
    scanf("%d",&x);
    a=x/10000;
    b=x/1000-a*10;
    c=x/100-a*100-b*10;
    d=x/10-a*1000-b*100-c*10;
    e=x-a*10000-b*1000-c*100-d*10;
    if(a!=0)n=5;
    else if(b!=0)n=4;
    else if(c!=0)n=3;
    else if(d!=0)n=2;
    else n=1;
    if(a>9)printf("输入的数大于5位\n");
 printf("%d\n%d %d %d %d %d\n",n,a,b,c,d,e);
        if(n=5)j=e*10000+d*1000+c*100+b*10+a;
      else if(n=4)j=e*1000+d*100+c*10+b;
        else if(n=3)j=e*100+d*10+c;
        else if(n=2)j=e*10+d;
      else j=e;
    printf("%d\n",j);
}
