#include<stdio.h>
int main(){
	int i=300,sum=0;
	while(i<=800){
		if(i % 7==0)
		sum+=i;
		i++;
	}
	printf("%d ",sum);
	return 0;
}
