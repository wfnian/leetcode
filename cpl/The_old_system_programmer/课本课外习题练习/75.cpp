#include<stdio.h>
int main(){
	int i,flag,k;
	int a[10];
	printf("please input 10 integers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("please input K\n");
	scanf("%d",&k);
	flag=0;
	for(i=0;i<10;i++){
		if(a[i]==k){
			printf("Found %d 's position is %d\n",k,i+1);
			flag=1;
		}
	}
	if(flag==0)
	printf("Not Found\n");
}
