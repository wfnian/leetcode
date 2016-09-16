#include<stdio.h>
#include<stdlib.h>
int main(){
//	int n;
//	scanf("%d",&n);
	int a[100];
//	int i;
	int maxmm;
	int mm=0;
int mmm(int maxm,int m);
mmm(maxmm,mm);
	printf("%d %d",maxmm,mm);
}
int mmm(int maxm,int m){
	int i;
		int n;
	scanf("%d",&n);
	int a[1000]; 
		for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	maxm=a[0]; 
	for(i=0;i<n;i++){
		if(a[i]>maxm)
		maxm=a[i];
	}
		for(i=0;i<n;i++){
		if(a[i]==maxm)
		m++;
	}
//	return (maxm,m);
} 
