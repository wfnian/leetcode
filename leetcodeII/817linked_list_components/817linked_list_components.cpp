#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


/*
liked list: 0->1->2->3->4
++++++++++++=====|||=====
I highlighed the subset G in linked list with color red.
The problem is just to count how many red part there are.
One red part is one connected components.
To do this, we just need to count tails of red parts.
*/
class Solution {
public:
	bool isIn(vector<int>&G, int tag) {
		for(auto var:G)
			if (var == tag)
				return true;
			else if (var > tag)
				return false;
		return false;
	}
	int numComponents(ListNode* head, vector<int>& G) {
		int res = 0;
		sort(G.begin(), G.end());
		while (head!=NULL)
		{
			if (isIn(G,head->val)&&(head->next==NULL||!isIn(G,head->next->val))) {
				res++;
			}
			head = head->next;
		}
		return res;
	}
};
int main() {
	// 还是不会用 C++ 写链表。
	/*ListNode first(-1);
	ListNode head = first;
	
	for (size_t i = 0; i < 4; i++)
	{
		ListNode last(i);
		head.next = last;

	}*/
}