#include<stdio.h>
int main(){
	int a[10],i,max =0,log;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=1;i<10;i++)
	if(a[i]>max)
	{
		max=a[i];
		log=i;
	}
	printf("%d\t%d",max,log+1);
	return 0;
}
