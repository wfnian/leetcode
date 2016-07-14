#include<stdio.h>
int main()
{int x;float y;
printf("输入商品的件数：");
scanf("%d",&x);
{if (x<5) y=100*x;
else if(5<=x&&x<10) y=0.99*100*x;
else if(10<=x&&x<=20) y=0.98*100*x;
else if(20<=x&&x<=30) y=0.96*100*x;
else  y=0.94*100*x;}
printf("%5.2f \n",y);
return 0;
}
