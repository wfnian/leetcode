#include<stdio.h>
int main()
{int a;
printf("输入一个整数：");
scanf("%d",&a);
if(a%3==0 && a%5==0 && a%7==0)
  printf("同时能被三个数整除\n");
else if(a%3 && a%5==0 && a%7==0)
printf("该数能被5，7整除 \n");
else if(a%3==0 && a%5&& a%7==0)
printf("该数能被两数3，7整除 \n");
else if(a%3==0 && a%5==0 && a%7)
printf("该数能被两数3，5整除 \n");
else if(a%3==0 && a%5 && a%7)
printf("该数能被一数3整除 \n");
else if(a%3 && a%5==0 && a%7)
printf("该数能被一数5整除 \n");
else if(a%3 && a%5 && a%7==0)
printf("该数能被一数7整除 \n");
else printf("不能被3，5，7任一数整除 \n");}
