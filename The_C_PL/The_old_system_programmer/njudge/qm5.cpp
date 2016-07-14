#include<stdio.h>
int main(){
    FILE*fp;
    int a[1024],n,i,max;
    fp=fopen("f:\\нд╪Ч\\file.txt","r");
    if(fp==NULL){
        printf("file not open!");
        return 9;
        }
    while(!feof(fp)){
        fscanf(fp,"%d",&n);
        for(i=0;i<n;i++){
            fscanf(fp,"%d",&a[i]);
            }
        }
        max=a[0];
        for(i=0;i<n-1;i++){
            if(a[i]>max)
            max=a[i];
            }
        for(i=0;i<n-1;i++)    
            a[i]=-(max-a[i]);
         for(i=0;i<n-1;i++){
             printf("%d ",a[i]);
             }   
             fclose(fp);
    }
