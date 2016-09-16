#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,flag=0,k;
	int a[10];
	printf("please input 10 inteager\n");
	for (i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	printf("please intput k\n");
	scanf("%d",&k);
	for(i=0;i<10;i++){
		if(a[i]==k){
			printf("found%dposition is %d",k,i+1);
			flag=1;
			break;
		}
		
	}
	if(flag==0){
	
	printf("no find %d",k);}
	system("pause");
	return 0;
	
}
