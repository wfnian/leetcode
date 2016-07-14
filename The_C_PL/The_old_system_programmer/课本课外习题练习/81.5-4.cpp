#include<stdio.h>
int main(){
	char str[10];
	int i,dig=0;
	for(i=0;i<10;i++){
		scanf("%c",&str[i]);
	}
	for(i=0;i<10;i++){
		if(str[i]>='0'&&str[i]<='9')
			dig=dig+1;
	}
	printf("%d   ",dig);
}
