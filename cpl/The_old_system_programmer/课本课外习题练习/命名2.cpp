#include<stdlib.h>
#include<stdio.h>
int main(){
	int b[1024]={5,10,29,36,48,67,68};
	int j;
	int k;
	scanf("%d ",&k);
	for(j=0;b[1024]!='\0';j++){
        if(b[j]<k&&b[j+1]>k)
         b[j+2]=b[j+1];
        b[j+1]=k;
		}
        for(j=0;b[1024]!='\0';j++)
        printf("%d ",b[1024]);
} 
