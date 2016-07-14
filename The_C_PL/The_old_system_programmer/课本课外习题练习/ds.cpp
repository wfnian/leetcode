#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		for(j=2;j<=i-1;j++){ 
			if(i%j==0)
			break;
	}
	if(j>=i)
		printf("%d\n",i); 
	}
	return 0;
}
