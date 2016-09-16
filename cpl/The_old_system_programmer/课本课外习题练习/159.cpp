#include<stdio.h>
struct stu{
	long num;
	float score;
	struct stu*next;
};
int main(){
	struct stu s1,s2,s3,*head,*p;
	head=&s1;
	s1.num=840010;s1.score=82;s1.next=&s2;
	s2.num=840020;s2.score=92.5;s2.next=&s3;
	s3.num=840030;s3.score=88;s3.next=NULL;
	p=head;
	while(p!=NULL){
		printf("%ld%5.1f\n",p->num,p->score);
		p=p->next;
	}
//	for( ;p!=NULL;p++){
//	printf("%ld%5.1f\n",p->num,p->score);
//	}
}
