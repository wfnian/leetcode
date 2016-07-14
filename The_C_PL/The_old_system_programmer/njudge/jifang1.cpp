#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    char a[1024];
    gets(a);
     for(i=0;a[i]!='\0';i++){
           if(a[i]<='9'&&a[i]>='0')
                      printf("%c",a[i]);
       }   
      printf("\n"); 
      for(i=0;a[i]!='\0';i++){
            if(a[i]<='z'&&a[i]>='a')
                        printf("%c",a[i]);
       } 
       printf("\n");
       for(i=0;a[i]!='\0';i++){
             if(a[i]<='Z'&&a[i]>='A')
                    printf("%c",a[i]);
       } 
       printf("\n");
       for(i=0;a[i]!='\0';i++){
             if(a[i]>='Z'&&a[i]<='A'&&a[i]>='z'&&a[i]<='a'&&a[i]>='9'&&a[i]<='0')
                    printf("%c",a[i]);
       } 
       printf("\n");
    system ("pause");
    return 0;   
}    
