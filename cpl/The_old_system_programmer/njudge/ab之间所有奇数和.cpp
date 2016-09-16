#include<stdio.h> 
int main()
{
	int i,a,b,sum=0;
	scanf("%d %d",&a,&b);
	if(a>b){
	  for(i=b;i<=a&&i%2!=0;i++)
	   sum=sum+i;
	    printf("%d",sum); 
     }
    else{
    	for(i=a;i<=b&&i%2!=0;i++)
	   sum=sum+i;
	    printf("%d",sum); 
	} 
	return 0;
}
