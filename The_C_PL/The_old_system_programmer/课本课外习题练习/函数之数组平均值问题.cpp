#include<stdio.h>
#include<math.h>
int main(){
	int i,k,N,x[100];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		x[i]=600*cos(i*0.35);
	}
	int fun(int arr[],int t);
	k=fun(x,N);
	printf("%d",k);
}
int fun(int arr[],int t){
	int j,hh=0;
	int aver;
	int sum;
	for(j=0;j<t;j++){
		sum+=arr[j];
	}
	aver=sum/t;
	for(j=0;j<t;j++){
		if(arr[j]<aver)
		hh++;
	}
	return hh;
}
