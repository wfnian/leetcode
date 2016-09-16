#include<stdio.h>
#include<stdlib.h>
int main(){
	int m;
	int sum=0;
	int i;
	scanf("%d",&m);
	for(i=0;i<=m;){
		sum+=i;
		i=i+2;
	}
	printf("%d\n",sum);
	
} 
