#include<stdio.h>
int main(){
	int sum,i=0,n;
	scanf("%d",&n);

	 do{sum=i*i;
	   printf("%d\n",sum);
	   i++;	
	 }while(sum<n-1);
	return 0;
}
