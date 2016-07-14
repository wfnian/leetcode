#include<stdio.h>
int main(){
	int a[36],i,j=0,k=0,s=0,av;
	for(i=0; ;i++){
		scanf("%d",&a[i]);
		if(a[i]<0)
		break;
		j++;
	}
	for(i=0;i<j;i++){
		s=s+a[i];
		av=s/j;
	}
	for(i=0;i<j;i++){
		if(a[i]>av)
		k++;
	}
	printf("%d",k);
}
