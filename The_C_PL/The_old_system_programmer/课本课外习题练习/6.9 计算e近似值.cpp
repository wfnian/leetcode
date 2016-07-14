#include<stdio.h>
int main(){
	double e,s;
	int i=1;
	for( ; ;i++){
		s=1/i;
		
		e+=s;
		if(s<0.00001)
		break; 
	}
	printf("%.6lf",e+1.0);
}
