#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    int b;
    int t;
    scanf("%d %d",&a,&b);
    printf("%d\t%d\n",a,b);
    int*pa,*pb;
    pa=&a;
    pb=&b;
    t=*pa;
    *pa=*pb;
    *pb=t;
    printf("%d\t%d\n",a,b);
    system("pause");
    return 0;
    
}    
