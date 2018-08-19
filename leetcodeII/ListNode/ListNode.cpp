#include <iostream>
/* 
LinkList operations;
primary.
*/
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

int main()
{
	ListNode *first = new ListNode(-1);
	ListNode *head = first;

	for (size_t i = 0; i < 5; i++) {
		ListNode *last = new ListNode(i);
		head->next = last;
		head = last;
	}

	for (ListNode *root = first->next; root != NULL; root = root->next)
		cout << root->val << "->";
	cout << "NULL";

	return 0;
}

