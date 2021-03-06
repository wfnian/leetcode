// Linklist_cycle.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;
/*
Given a linked list, determine if it has a cycle in it.
*/

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

void CreatList(ListNode *&L, vector<int>&nums) {
	ListNode *head = L;
	ListNode *last;
	for (size_t i = 0; i < nums.size(); i++)
	{
		last = new ListNode(nums.at(i));
		head->next = last;
		head = last;
	}
	head->next = NULL;

}

void PrintList(ListNode *&L) {
	for (ListNode*p = L->next; p != NULL; p = p->next)
		cout << p->val << " ";
	cout << endl;
}

class Solution {
public:
	bool hasCycle(ListNode *head) {
		ListNode *step1 = head, *step2 = head;
		while (step2 != NULL && step2->next != NULL)
		{

			step1 = step1->next;
			step2 = step2->next->next;
			if (step1 == step2)
			{
				return true;
			}
		}

		return false;
	}
};

int main() {
	vector<int>nums{ 1,3,2,4,5,6,7,8,4,5,6,7 };
	nums = { 1,2 };
	ListNode *first = new ListNode(-1);
	CreatList(first, nums);
	PrintList(first);

	cout << ((Solution().hasCycle(first) == 0) ? "false" : "true") << endl;

}