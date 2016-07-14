#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    scanf("%d",&a);
   int *px;
    char res;
    px=&a;
    if(*px%2==0)
        res='Y'; 
    else
    res='N';
    printf("%c",res);
    system("pause");
    return 0;
}    
