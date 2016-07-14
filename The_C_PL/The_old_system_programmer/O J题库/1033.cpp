#include<stdio.h>
int main(){
    int i;
    char a[1024];
    gets(a);
     for(i=0;a[i]!='\0';i++){
           if(a[i]='a')
                      printf("%c",a[i]);
       }
}
