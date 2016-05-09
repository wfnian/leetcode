#include <stdio.h>
#define add(a,b) (a+b)*a
int main(){
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF){
		printf("%d\n", add(a, b));
	}
	return 0;
}
