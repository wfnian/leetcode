#include<stdio.h>
int main(){
	int a[5],i,max,l=0;
	for(i=0;i<5;i++)
	  scanf("%d",&a[i]);
	  max=a[0];
	  for(i=1;i<5;i++)
		{
		  if(a[i]>max)
		   max=a[i];
		   l=i;
	    }
	
	  printf("%d  %d",a[i+1],l);
}
