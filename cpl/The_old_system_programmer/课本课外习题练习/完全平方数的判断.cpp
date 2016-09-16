#include<stdio.h>
int main(){
    int i,s;
    int a,flag;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        s=i*i;
        if(s==a)
           flag=0;
        else
            if(s>a*a)
			flag=1; 
}
    if(flag==1){
    	printf("FALSE");
	}
	if(flag==0){
		printf("TRUE");
	}
}
