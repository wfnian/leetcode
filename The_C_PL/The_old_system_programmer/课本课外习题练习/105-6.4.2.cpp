#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10]={1,2,33,44,5,6,77,88,99,23};
	int i,h,sum=0;
	int uuu(int a);
	for(i=0;i<10;i++){
		h=uuu(a[i]);
		sum=sum+h;
	}
	//	sum=sum+h;
	printf("%d",sum);
} 
int uuu(int a){
	if(a%2==0){
		return 0;
	}
	else return 1;
}
