#include<stdio.h>
#include<math.h>
int main(){
	int x[1024],i,N,n;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		x[i]=N*sin(i*0.16);
	}
	int fun(int arr[], int t);
	n=fun(x,N);
	printf("%d\n",n);
}
int fun(int arr[], int t){
	int j,nn;
	int maxf=arr[0];
	for(j=0;j<t;j++){
		if(arr[j]>maxf){
			maxf=arr[j];
			nn=j;
		}
	}
	return nn;
}
