#include<stdio.h>
int main(){
	int i,j,a[20],b[20],c[20],n,k;
/*	scanf("%d",&n);*/
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=0;i<10;i++){
		if(a[i]==n){
			k=i;
			for(i=k+1;i<10-k;i++){
		for(j=0;j<10-k;j++){
					c[j]=a[i];
				}
			}	
		}
	}

	for(i=0;i<k;i++)
	b[i]=a[i];
	
	for(i=0;i<k;i++){
		printf("%d ",b[i]);
	}
	for(j=k+1;j<10;j++){
		printf("%d ",c[j]);
	}
		
} 
