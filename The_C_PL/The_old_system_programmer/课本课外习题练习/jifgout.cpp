#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
struct xs{
	int x;
	struct xs *next;
};
int main(){
	struct xs A,B,C,D,K,*p;
	A.x=100;
	B.x=200;
	C.x=300;
	D.x=400;
/*	scanf("%d",&A.x);
	scanf("%d",&B.x);
	scanf("%d",&C.x);
	scanf("%d",&D.x);*/
		A.next=&B;
		B.next=&C;
		C.next=&D;
		D.next=NULL;
		p=&A;
		while(p){
			printf("%d\n",p->x);
			p=p->next;
		}
	/*	p=p->next;
		printf("%d\n",p->x);*/
	//	printf("%d\n",p->next->next->next->x);
	//	printf("%d\n",A.x);
	/*	printf("%d\n",p->x);
		p=A.next;
		printf("%d\n",p->x);
		p=B.next;
		printf("%d\n",p->x);
		p=C.next;
		printf("%d\n",p->x);
		p=D.next;*/
	//	printf("%d\n",*(A.next).x);	
	system("pause");	
}                               
