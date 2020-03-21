#include <iostream>
#include <vector>

using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(nullptr){}
};
class LinkList {
public:
	ListNode* CreatList(ListNode *&L, vector<int>data) {
		ListNode *first = new ListNode(-1);
		ListNode *last = first;
		ListNode *temp;
		for (size_t i = 0; i < data.size(); i++){
			temp = new ListNode(data[i]);
			last->next = temp;
			last = temp;
		}
		last->next = NULL;
		
		return first->next;
	}

	ListNode* CreatListHead(ListNode *&L, vector<int>data) {
		ListNode *head = new ListNode(-1);
		ListNode *tmp;
		for (size_t i = 0; i < data.size(); i++){
			tmp = new ListNode(data[i]);
			tmp->next = head->next;
			head->next = tmp;
		}
		return head->next;
	}

	void PrintList(ListNode *L) {
		ListNode *p = L;
		while (p!=NULL){
			cout << p->val << "->";
			p = p->next;
		}
	}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *first = new ListNode(-1);
		ListNode *last = first;
		ListNode *tmp;
		int extra = 0;
		while (l1 != NULL && l2 != NULL)
		{

			tmp = new ListNode((l1->val + l2->val + extra) % 10);
			extra = (l1->val + l2->val + extra) / 10;
			l1 = l1->next;
			l2 = l2->next;
			last->next = tmp;
			last = tmp;
		}
		while (l1 != nullptr)
		{
			tmp = new ListNode((l1->val + extra) % 10);
			extra = (l1->val + extra) / 10;
			l1 = l1->next;
			last->next = tmp;
			last = tmp;
		}
		while (l2 != nullptr)
		{
			tmp = new ListNode((l2->val + extra) % 10);
			extra = (l2->val + extra) / 10;
			l2 = l2->next;
			last->next = tmp;
			last = tmp;
		}
		if (extra)
		{
			tmp = new ListNode(extra);
			last->next = tmp;
			last = tmp;
		}

		return first->next;
	}
};

int main()
{
	ListNode *L1 = new ListNode(-1);
	ListNode *L2 = new ListNode(-1);
	vector<int>nums1 = { 1 };
	vector<int>nums2 = { 9,9};
	LinkList tmp;
	L1 = tmp.CreatList(L1, nums1);
	tmp.PrintList(L1);
	L2 = tmp.CreatList(L2, nums2);
	tmp.PrintList(L2);

	cout << endl;
	ListNode *res = Solution().addTwoNumbers(L1, L2);
	tmp.PrintList(res);
	
    //std::cout << 2/10;
}
