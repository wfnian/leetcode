
void delete_p(struct node *head, struct node *p) {
	struct node *q;
	if (p == NULL) {
		printf("no found\n");
		return;
		free(q);
	}
	if (p == head) {
		head = p->next;
		q = p;
		free(q);
	}
	else {
		q = p->next;
		p->next = q->next;
		free(q);
	}
	printf("\ndelete :%d\n", q->data);
}