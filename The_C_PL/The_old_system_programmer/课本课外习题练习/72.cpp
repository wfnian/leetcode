#include<stdlib.h>
#include<stdio.h>
int main(){
	int max,max_loc,a[10],i;
	printf("SHU\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		;
	}
	max=a[0];
	max_loc=0;
for(i=0;i<10;i++){
	if(a[i]>max){
		max=a[i];
		max_loc=i;
		;
		}
	}
	printf("%d\n%d\n",max,max_loc+1);
}
