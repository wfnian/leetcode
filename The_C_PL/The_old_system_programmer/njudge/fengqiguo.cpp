#include<stdio.h>
int main(){
	int i,j=0,h;
	scanf("%d",&h);
	for(i=1; ;i++){ 
	if(i%7==0||i%10==7){ 
	 	printf("%d\n",i); 
		j++;
	if(j==h) 
	break;
		}
	} 
}
