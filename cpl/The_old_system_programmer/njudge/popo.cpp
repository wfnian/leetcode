#include<stdio.h>
int main(){
	int n,a[36];
	int i;
	scanf("%d",&n);
	int arr(int b[],int a);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	arr(a,n);
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
}
int arr(int a[],int n){
	int i,j;
	int t;
	for(j=1;j<n;j++){
	
		for(i=0;i<n-j;i++){
			if(a[i]>a[i+1]){
			
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				}
			}
		}
	}
