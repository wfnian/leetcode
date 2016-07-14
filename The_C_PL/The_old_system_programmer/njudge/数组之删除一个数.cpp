#include <stdio.h>
int main (){
 	int a[10],b[10],i,j,x;
 	for(i=0;i<10;i++)
 		a[i]=i*3+2;
 		for(i=0;i<10;i++)
		 printf("%d ",a[i]); 
 		printf("\n");
	 scanf("%d",&x);
 	for(i=0;i<10;i++)
 		if(a[i]==x)
 		for(j=i;j<9;j++){
 			b[j]=a[i+1];
		 }
		 b[j]='\0';
 	
 	for(j=i;j<9;j++)
 	printf("%3d",b[j]);
} 
