#include<stdio.h>
#include<math.h>
int main(){
	int m[1024];
	int*p;
	p=&m[0];
	int n;
	int i;
	scanf("%d",&n);
	for(p=m;*p<n;p++){
		*p=600*cos(i*0.35); 
	}
	for(p=m;*p<n;p++){
		printf("%d",*p);
	}
	return 0;
}
