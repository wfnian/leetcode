#include<stdio.h>
int main(){
	int i,n=0;
	float sum=0,f;
	printf("ENTER£Á£Ò£Å£Á£ÌNUMBER:\n");
	for(i=0;i<10;i++){
		scanf("%d",&f);
		if(f<=0)
			continue;
		sum=sum+f;
		n++;
	}
	printf("%d\n",n);
	printf("%f\n",sum);
		printf("%f\n",sum/n);
}
