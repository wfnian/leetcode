#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
      float x1,x2,y1,y2,d;
      printf("输入第一个点(x1,y1)的坐标和第二个点(x2,y2)的坐标: ");
      scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
      d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
      printf("两点间的距离是%.2f",d);
      system("pause");


}
