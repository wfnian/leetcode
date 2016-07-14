#include<stdio.h>
main()
{
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
//if((a+b)>c&&(a-b)<c)
//{
if(a==b||b==c||c==a)
printf("这是个等腰三角形\n");
else 
printf("这是三角形，但不是等腰三角形\n");
//}
//else
//printf("这三条边不能构成三角形\n");
}
