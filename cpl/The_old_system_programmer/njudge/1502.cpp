#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,sum,n,a[1024],aver,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	 for(i=0;i<n;i++){
	 	sum=sum+a[i];
	 	aver=sum/n;
	 }
	for(i=0;i<n;i++){
	if(a[i]>aver)
	j++;
	}
	printf("%d",j);
	system("pause");
	return 0;
} 
