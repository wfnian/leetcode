#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,sum;
    int *px,*py;
    px=&x;
    py=&y;
    scanf("%d%d",&x,&y);
    sum=*px+*py ;
    printf("%d",sum);
    system("pause");
    return 0;   
}
