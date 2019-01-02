// 445add_two_numbers_II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		this->reverseList(l1);
		this->reverseList(l2);

		ListNode *res = new ListNode(-1);
		ListNode *last = res;
		ListNode *temp;
		int extra = 0;
		while (l1!=NULL&&l2!=NULL)
		{
			temp = new ListNode((l1->val + l2->val+extra) % 10);
			extra = (l1->val + l2->val + extra) / 10;
			last->next = temp;
			last = temp;
			l1 = l1->next;
			l2 = l2->next;
		}
		while (l1!=NULL)
		{
			temp = new ListNode((l1->val  + extra) % 10);
			extra = (l1->val  + extra) / 10;
			last->next = temp;
			last = temp;
			l1 = l1->next;
		}
		while (l2!=NULL)
		{
			temp = new ListNode((l2->val + extra) % 10);
			extra = (l2->val + extra) / 10;
			last->next = temp;
			last = temp;
			l2 = l2->next;
		}
		if (extra != 0) {
			temp = new ListNode((extra) % 10);
			last->next = temp;
			last = temp;
		}
		last->next = NULL;
		reverseList(res->next);
		return res->next;
	}
	void reverseList(ListNode *&L) {
		ListNode *p = L;
		ListNode *first = new ListNode(-1);
		ListNode *tmp=p;
		while (p!=NULL)
		{
			tmp = tmp->next;
			p->next = first->next;
			first->next = p;
			p = tmp;
		}
		L = first->next;
	}

};

class m_list // 程序化建造链表。
{
public:
	m_list() {};
	m_list(vector<int> arr,ListNode *&L) {
		ListNode *first = new ListNode(-1);
		ListNode *last=first;
		ListNode *temp;
		for (size_t i = 0; i < arr.size(); i++)
		{
			temp = new ListNode(arr[i]);
			last->next = temp;
			last = temp;
		}
		last->next = NULL;
		L = first->next;
	}
	void creatList(ListNode *&L,int n) {
		ListNode *first = new ListNode(-1);
		ListNode *last = first;
		ListNode *temp;
		int val;
		for (size_t i = 0; i < n; i++)
		{
			cin >> val;
			temp = new ListNode(val);
			last->next = temp;
			last = temp;
		}
		last->next = NULL;
		L = first->next;
	}
	void printList(ListNode *L) {
		ListNode *list = L;
		while (list!=NULL)
		{
			cout << list->val << " ";
			list = list->next;
		}
	}
	~m_list() {};

private:

};


int main()
{
	ListNode *l1, *l2;
	vector<int>arr1{ 7, 2, 4, 3 };
	vector<int>arr2{ 5, 6, 4 };
	m_list list(arr1,l1),list2(arr2, l2);

	ListNode *ans = Solution().addTwoNumbers(l1, l2);
	list2.printList(ans);
    std::cout << "Hello World!\n"; 
}

