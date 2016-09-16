#include<stdio.h>
int main(){
	int i;
	int n;
	scanf("%d",&n);
	for(i=0; ;i++){
		printf("%d\n",i*i);
		if((i+1)*(i+1)>n)
		break;
	}
}
