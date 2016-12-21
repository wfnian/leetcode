/*
234. Palindrome Linked List
Given a singly linked list, determine if it is a palindrome.
*/
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
void init(struct ListNode *L) {
	if (L = NULL)
		return;
	(*L).next = NULL;
}
void creat(struct ListNode **L, int n) {
	int elem;
	struct ListNode *p, *r;
	r = (*L);
	for (int i = 0; i < n; i++) {
		p = (struct ListNode*)malloc(sizeof(struct ListNode));
		scanf("%d", p->val);
		p->next = NULL;
		r->next = p;
		r = p;
	}
}
bool isPalindrome(struct ListNode* head) {
	int i = 0;
	while (head->next != NULL) {
		i++;
		head = head->next;
	}
	printf("%d", i);
	return true;
}
void print(struct ListNode **L) {
	if ((*L) == NULL)
		return;
	while ((*L)->next != NULL) {
		printf("%d ", (*L)->val);
	}
}
int main() {
	struct ListNode *L;
	int n;
	while (scanf("%d", &n)) {
		init(&L);
		/*creat(L, n);
		print(L);*/
	}
}