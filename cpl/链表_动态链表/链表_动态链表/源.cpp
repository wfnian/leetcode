#include<stdio.h>
#include<malloc.h>
 struct student{
	long num;
	float score;
	struct student*next;
};
struct student*creat(){
	struct student *head;
	struct student*p1, *p2;
	head = NULL;
	p1 = p2 = (struct student*)malloc(sizeof(struct student));
	scanf_s("%ld %lf", &p1->num, &p1->score);
	p1->next = NULL;
	while (p1->num != -1) {
		if (head == NULL)
			head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf("%ld %lf", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}
void print(struct student*head) {
	struct student*p;
	p = head;
	while (p != NULL) {
		printf("%ld%5.1f\n", p->num, p->score );
		p = p->next;
	}
}
void main() {
	struct student*creat();
	void main(struct student*head);
	struct student*head;
	head = creat();
	print(head);
}