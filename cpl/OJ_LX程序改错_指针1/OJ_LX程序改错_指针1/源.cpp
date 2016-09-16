#include <stdio.h>
#include <malloc.h>
void set(int &p){
	p = (int)malloc(sizeof(int));
	p = 100;
}
int main(){
	int *p;
//	*p = 100;
    set(*p);
	if (*p != NULL){
		printf("%d", *p);
	}
	else{
		printf("P is NULL");
	}
	return 0;
}
