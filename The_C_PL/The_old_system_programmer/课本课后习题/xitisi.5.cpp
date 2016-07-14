#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
     for(x=0;x<=100;x++)
      for(y=0;y<=100;y++)
       for(z=0;z<=100;z++)
        if(x+y+9*z==100&&2*x+4*y+2*z==100)
         printf("%d %d %d\n",x,y,z);
         printf("\n");
    system("pause");
    return 0;
}
