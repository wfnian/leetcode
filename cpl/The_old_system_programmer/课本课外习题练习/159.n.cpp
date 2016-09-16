#include<stdio.h>
struct stu{
	long mum;
	float score;
	struct stu*next;
};
int main(){
	struct stu s1,s2,s3,*head,*p;
	head=&s1;
	s1.mum=84010;s1.score=82;s1.next=&s2;
	s2.mum=84020;s2.score=91.5;s2.next=&s3;
	s3.mum=84030;s3.score=88;s3.next=NULL;
	p=head;
	while(p!=NULL){
		printf("%ld%5.1f\n",p->mum,p->score);
		p=p->next;
	}
}
