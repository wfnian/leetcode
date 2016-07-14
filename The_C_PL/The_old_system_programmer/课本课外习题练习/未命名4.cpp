#include<stdio.h>
#include<math.h>
int main(){
	int p[1024];
	int a[1024];
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		p[i]=600*cos(i*0.35); 
	
	for(i=0;i<n;i++){
		printf("%d ",p[i]);//[i]; 
}
	return 0;
}
