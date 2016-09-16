#include<stdio.h>
int main()
{
 int f,c;
 printf("输入华氏温度：\n");
 scanf("%f",&f);
 c=(f-32)/1.8;
 printf("对应的摄氏温度是：%5.2f\n",c);
}
