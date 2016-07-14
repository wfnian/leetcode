#include<stdio.h>
int main(){
	void fun(int arr[], int t);
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	fun(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
void fun(int arr[], int t){
	int j;
	for(j=0;j<t;j++){
	arr[j]=-arr[j];
	}
}
