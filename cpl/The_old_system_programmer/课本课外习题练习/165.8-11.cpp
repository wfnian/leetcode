#include<stdio.h>
struct data1{
	char ch;
	int i;
	float f;
}a;
union data2{
	char ch;
	int i;
	float f;
}b;
int main(){
	printf("%d %d\n",sizeof(struct data1),sizeof(union data2));
}
