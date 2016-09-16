#include<stdio.h>

int main()
{
int x,y,z,m;
printf("请输入一个有三个位的整数：");
scanf("%d",&m);
x=m/100;
y=m/10-10*x;
z=m%10;
printf("百位：%d\n",x);
printf("十位：%d\n",y);
printf("个位：%d\n",z);
}
