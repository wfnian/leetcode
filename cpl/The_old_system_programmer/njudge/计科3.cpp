#include<stdio.h>
int main(){
    int a[1024]={5,10,29,36,48,67,68};
    int k;
    int i;
    scanf("%d",&k);
    int mmm(int b[1024],int m);
    mmm(a,k);
    for(i=0;a[i]!='\0';i++)
    printf("%d ",a[i]);
}
int mmm(int b[1024],int m){
    int j;
    for(j=0;b[1024]!='\0';j++){
        if(b[j]<m&&b[j+1]>m)
         b[j+2]=b[j+1];
        b[j+1]=m;
        
       
        }
             
}  
