#include<stdio.h>
int main(){
	int i,j,n,N;
	scanf("%d",&n);
	int a[36];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&N);
	int fun(int a[], int n, int N);
	fun(a,n,N);
	return 0;
}
int fun(int a[], int n, int N){
		int flag=-1,k,i;
	for(i=0;i<n;i++){
		if(a[i]==N){
			k=i;
			flag=0;
		}
	}
	if(flag==0){
		printf("%d\n",k);
	}
	 if(flag==-1){
		printf("%d\n",flag);
      } 
}
