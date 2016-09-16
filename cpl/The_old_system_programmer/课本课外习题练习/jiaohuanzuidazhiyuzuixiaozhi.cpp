#include<stdio.h>
int main(){
	int n,a[30],i,maxv,minv,min_1,max_n,t,o;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	maxv=a[0];
	minv=a[0];
	min_1=a[0];
	max_n=a[n-1];
	for(i=0;i<n;i++){
		if(a[i]>maxv){
			maxv=a[i];
		}
		if(a[i]<maxv){
		 	minv=a[i]; 
		}
	}
	for(i=0;i<n;i++){
		/*t=maxv;maxv=max_n;max_n=t;
		o=minv;minv=min_1;min_1=o;*/
		t=a[0];a[0]=minv;minv=t;
		o=a[n-1];a[n-1]=maxv;maxv=o;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
} 
