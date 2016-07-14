#include<stdio.h>
int main(){
    void fun(int a[1024],int k);
    int n[1024],i;
    int q;
    scanf("%d",&q);
    for(i=0;i<q;i++)
      scanf("%d",&n[i]);
      fun(n,q);
      for(i=0;i<q;i++)
       printf("%d ",n[i]);
       return 0;
}
void fun(int a[1024] ,int k){
    int b;
    for(b=0;b<k;b++)
    a[b]=-a[b];
}

