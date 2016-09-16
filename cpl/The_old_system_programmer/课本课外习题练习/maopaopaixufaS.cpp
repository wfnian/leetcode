#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,temp;
	int a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		printf("\n");
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
		printf("%7d",a[i]);
		printf("\n");
	system("pause");
	return 0;
} 
