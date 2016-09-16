#include<stdio.h>
#include <math.h>
int main(){
	int n ;
	scanf("%d", &n) ;
	if(n == (int)sqrt(n)*(int)sqrt(n))
	printf("TRUE") ;
	else
	printf("FALSE") ;
}
