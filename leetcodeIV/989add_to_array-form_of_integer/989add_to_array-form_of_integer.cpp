// 989add_to_array-form_of_integer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define valType int

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int _val) :val(_val), next(nullptr) {}
};

class m_LinkList //自己格式化的链表程序
{
public:

	void creatList(ListNode *&L, vector<valType> data)
	{
		ListNode *first = new ListNode(-1);
		ListNode *last = first;
		ListNode *temp;
		for (size_t i = 0; i < data.size(); i++)
		{
			temp = new ListNode(data[i]);
			last->next = temp;
			last = temp;
		}
		last->next = nullptr;
		L = first->next;
	}

	void printList(ListNode *L) {
		ListNode *temp = L;
		while (temp != nullptr)
		{
			cout << temp->val << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}

};

class Solution_add { //2add_two_numbers 
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int extra = 0;
		ListNode *first = new ListNode(-1);
		ListNode *last = first;
		ListNode *temp;
		while (l1 != nullptr&&l2 != nullptr)
		{
			temp = new ListNode((l1->val + l2->val + extra) % 10);
			extra = (l1->val + l2->val + extra) / 10;
			last->next = temp;
			last = temp;
			l1 = l1->next;
			l2 = l2->next;
		}
		while (l1 != nullptr)
		{
			temp = new ListNode((l1->val + extra) % 10);
			extra = (l1->val + extra) / 10;
			last->next = temp;
			last = temp;
			l1 = l1->next;
		}
		while (l2 != nullptr)
		{
			temp = new ListNode((l2->val + extra) % 10);
			extra = (l2->val + extra) / 10;
			last->next = temp;
			last = temp;
			l2 = l2->next;
		}
		if (extra)
		{
			temp = new ListNode(extra);
			last->next = temp;
			last = temp;
		}

		return first->next;
	}
};

class Solution {
public:
	vector<int> addToArrayForm(vector<int>& A, int K) {
		reverse(A.begin(), A.end());
		vector<int> list2;
		while (K)
		{
			list2.push_back(K % 10);
			K /= 10;
		}

		ListNode *L1, *L2, *res;
		m_LinkList().creatList(L1, A);
		m_LinkList().creatList(L2, list2);
		res = Solution_add().addTwoNumbers(L1, L2);
		list2.clear();

		while (res != nullptr)
		{
			list2.push_back(res->val);
			res = res->next;
		}
		reverse(list2.begin(), list2.end());

		return list2;
	}
};

int main()
{
	vector<int>list1{ 9,9,9,9,9,9,9,9,9,9 };
	for (auto var : Solution().addToArrayForm(list1, 1))
		cout << var;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
