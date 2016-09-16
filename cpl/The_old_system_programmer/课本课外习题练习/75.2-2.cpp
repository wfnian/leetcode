#include<stdio.h>
#include<stdlib.h>
int main(){
	int k;
	scanf("%d",&k);
	int a[10],i;
		for(i=0;i<10;i++)
			scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		{if(a[i]==k)
			 printf("%d",i);
			 else 
			 i++;}
			 printf("%d",i);
	system("pause");
	return 0;
} 
