#include<stdio.h>
//#include<sttdlib.h>
int main()
{
    char a;
    printf("输入");
    scanf("%c",&a);
       if(a>='A'&&a<='Z') 
         printf("是大写字母");
       else
      {
          if(a>='a'&&a<='z')
             printf("是小写字母");
          else
          {
              printf("是数字");
          }
          } 
  //  system("pause");
  return 0;
}
