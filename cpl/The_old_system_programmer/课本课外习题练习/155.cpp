#include<stdio.h>
struct count{
	int x;
	float y;
};
int main(){
	struct count arr[3]={1,1.5,2,2.5,3,3.5
	};
	struct count *p;
	p=arr;
	int i;
	for(p=arr;p<arr+3;p++){
		printf("%d %.2f\n",p->x,p->y);
	}
}
