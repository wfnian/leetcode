#include<stdio.h>
#include<stdlib.h>
int main(){
		int i,sum=0;
		int a[10];
		for(i=0;i<10;i++){
			scanf("%d",&a[i]);
		} 
		for(i=0;i<10;i++){
			sum+=a[i];
			
		}
		printf("%d",sum);
		
}
