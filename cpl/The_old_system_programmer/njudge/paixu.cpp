#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);	
	int a[n
	];

	int i,j ,temp;

	for(i=0;i<10;i++)
	 scanf("%d",&a[i]);
	 printf("\n") ;
	for(i=0;i<9;i++)
	  {
	  	for(j=0;j<9-i;j++)
	  	 {
	  	 	if(a[j]>a[j+1])
	  	 	{
	  	 		temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			   } 
		   }
	  }
	for(i=0;i<10;i++)
	 printf("%d\t",a[i]);
	 printf("5");
	return 0;
} 
