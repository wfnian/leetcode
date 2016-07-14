#include<stdio.h>
int main(){
	int a[111];
	int i,n,sum;
	scanf("%d",&n);
	int fun(int arr[],int t); 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sum=fun(a,n);
	printf("%d\n",sum);
}
int fun(int arr[100],int t){
	int j,s=0;
	for(j=0;j<t;j++){
		s=s+arr[j];	
	}
	return s;
}
