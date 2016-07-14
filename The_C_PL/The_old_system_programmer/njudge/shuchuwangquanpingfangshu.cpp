#include<stdio.h>
#include<stdlib.h>
int main(){
	int sum,i=0,n;
	scanf("%d",&n);
	if(n>=1&&n<=200)
	 {
	 do{sum=i*i;
	   printf("%d\n",sum);
	   i++;	
	 }while(sum<n-1);
}
else;
	system("pause");
	return 0;
}
