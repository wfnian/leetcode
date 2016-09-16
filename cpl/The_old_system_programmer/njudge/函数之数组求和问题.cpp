#include<stdio.h>
#include<stdlib.h>
int nnn(int a[1024]){
    int i,sum;
    sum=0;
    for(i=0;i!='\0';i++);
     sum+=a[i];
     return sum;
    }
int main(){
     int b[10];
     int summ=0;
     int j,n;
     scanf("%d",&n);
     for(j=0;j<n;j++)  
       scanf("%d",&b[j]);
      summ=nnn(b);
     printf("%d",summ);  
     system("pause");
}

