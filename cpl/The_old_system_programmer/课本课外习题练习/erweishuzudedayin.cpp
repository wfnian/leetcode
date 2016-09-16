#include<stdio.h>
int main(){
	int i,j,a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]%2==0)
			printf("%d\t",a[i][j]);
		}
	}
	
	return 0;
} 
