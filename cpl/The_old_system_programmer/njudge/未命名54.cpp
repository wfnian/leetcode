#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0,k=0,m=0,v,l;
    char a[1024];
    gets(a);
    l=strlen(a);
     for(i=0;a[i]!='\0';i++){
            if(a[i]<='z'&&a[i]>='a'||a[i]<='Z'&&a[i]>='A')
            k++; } 
                        printf("%d ",k);
     for(i=0;a[i]!='\0';i++){
           if(a[i]<='9'&&a[i]>='0')
           j++; } 
            printf("%d ",j);
     for(i=0;a[i]!='\0';i++){
           if(a[i]<=' ')
           m++; } 
                 printf("%d ",m);    
         v=l-(j+k+m);   
             printf("%d ",v);
    return 0;   
}  
