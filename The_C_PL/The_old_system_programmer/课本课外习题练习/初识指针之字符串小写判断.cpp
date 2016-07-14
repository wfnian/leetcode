#include<stdio.h>
int main(){
	char c[36];
	gets(c);
	int i,flag;
	for(i=0;c[i]!='\0';i++){
		if(c[i]<='z'&&c[i]>='a'){
	/*		continue;*/flag=0;
		continue;
		}
		else 
		flag==1;
	}
	if(flag==1){
		printf("FALSE");
	}
	if(flag==0){
		printf("TURE");
	}
}
