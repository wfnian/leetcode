#include<stdio.h>
#include<math.h>
int main(){
	int i;
	float max=34.555,min=2.00,a[30];
	for(i=0;i<30;i++){
		a[i] = 12*sin(i*2.3 + 5);
	}
/*	for(i=0;i<30;i++){
		printf("%f",a[i]);
	}*/
	for(i=0;i<30;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(i=0;i<30;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%.2f %.2f\n",min,max);
} 
