#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,sum;
    int *px,*py;
    px=&a;
    py=&b;
    scanf("%d%d",px,py);
    sum=*px+*py;
    printf("%d",sum);
    system("pause");
    return 0;
}    
