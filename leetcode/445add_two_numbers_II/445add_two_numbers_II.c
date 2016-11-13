/*
445. Add Two Numbers II
You are given two linked lists representing two non-negative numbers. The most significant digit comes first and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Follow up:
What if you cannot modify the input lists? In other words, reversing the lists is not allowed.
Example:
Input: (7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 8 -> 0 -> 7
*/
#include<stdio.h>
#include"malloc.h"
typedef struct ListNode {
	int val;
	struct ListNode *next;
}ListNode;
void InitList(ListNode *L) {
	(*L).next = NULL;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

}
int main() {
	ListNode *L;

	InitList(&L);
}