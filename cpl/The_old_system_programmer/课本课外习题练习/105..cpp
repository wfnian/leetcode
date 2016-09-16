#include<stdio.h>
int main(){
	int a[10]={4,7,9,1,54,67,88,2,21,3};
	int b;
	int fun(int s[10]);
	b=fun(a);
	printf("%d",b);
	return 0;
}
int fun(int s[10]){
	int i;
	int j=0;
	for(i=0;i<10;i++)
		if(s[i]%2!=0)
			 j++;
			else
			;
			return j;
}
