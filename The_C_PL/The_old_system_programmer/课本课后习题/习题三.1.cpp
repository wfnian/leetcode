#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("请输入该学生的成绩a");
    scanf("%d",&a);
     if(a>=60&&a<101&&a>=0)
      printf("pass\n");
     else
      printf("failure\n");
    system("pause");
    }
