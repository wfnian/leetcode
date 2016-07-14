#include<stdio.h>
int main(){
	int a[20]={1,1};
	int i;
	int *p;
	int n,m=0;
	float ave,s;
	scanf("%d",&n);
	int fun(int a[], int n, int m, float ave);
	fun(a,n,m,ave);
	return 0;
} 
int fun(int a[], int n, int m, float ave){
	int i;
	float s;
		for(i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			m++;
			s=s+a[i];
		}
	}
	ave=s/(m);
	printf("%d %.2f\n",m,ave);
}
