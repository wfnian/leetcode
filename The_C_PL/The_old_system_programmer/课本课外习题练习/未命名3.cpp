#include<stdio.h>
#include<stdlib.h>
int main(){
	int sum,i=0,n;
	scanf("%d",&n);

	 do{sum=i*i;
	   printf("%d\n",sum);
	   i++;	
	 }while(sum<n-1);

	system("pause");
	return 0;
}
