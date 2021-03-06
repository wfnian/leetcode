// 876middle_of_the_linked_list.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

void CreatList(ListNode *&L) {
	vector<int>nums = { 1,2,3,4,5,6 };
	ListNode *last;
	ListNode *head = L;
	for (size_t i = 0; i < nums.size(); i++)
	{
		last = new ListNode(nums[i]);
		head->next = last;
		head = last;
	}
	head->next = NULL;
}

void PrintList(ListNode *&L) {
	ListNode *p = L;
	for (p = L->next; p != NULL; p = p->next)
		cout << p->val << " ";
	cout << endl;
}
void PrintList2(ListNode *L) { //倒序打印
	if (L != NULL)
	{
		PrintList2(L->next);
		cout << L->val<< " ";
	}

}
class Solution {
public:
	ListNode* middleNode(ListNode* head) {//快慢指针
		ListNode *step1 = head, *step2 = head;
		while (step2 != NULL && step2->next != NULL) {
			step1 = step1->next;
			step2 = step2->next->next;
		}
		return step1;
	}
};
int main() {
	ListNode *L = new ListNode(-1);// 头节点必须初始化,就是next必须为NULL。
	CreatList(L);
	PrintList(L);
	Solution s;
	ListNode *p = s.middleNode(L);
	PrintList(p);

	return 0;
}