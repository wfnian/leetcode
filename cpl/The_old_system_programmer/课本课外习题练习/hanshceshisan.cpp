#include<stdio.h>
int main(){
	int a[8]={5, 10, 29, 36, 48, 67, 68};
	int i,b[36],c[36],d,e,j;
	int n;
	scanf("%d",&n);
	for(i=0;i<9;i++){
		if(a[i]>n){
			d=i-1;
			for(j=0;j<d;j++){
				b[j]=a[i];
			}
		}
	}
	for(j=0;j<d;j++){
		printf("%d ",b[j]);
	}
}
