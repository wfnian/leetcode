// 950reveal_cards_in_increasing_order.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <deque>
#include <stack>

using namespace std;
class Solution {
public:
	vector<int> deckRevealedIncreasing(vector<int>& deck) {
		stack<int> tmp;
		deque<int>dq;
		sort(deck.begin(), deck.end());
		for (auto var : deck)
			tmp.push(var);

		for (size_t i = 0; i < deck.size(); i++)
		{
			if (!dq.empty()) {
				int a = dq.back();
				dq.pop_back();
				dq.push_front(a);
			}
			dq.push_front(tmp.top());
			tmp.pop();
		}
		vector<int>ans(dq.begin(),dq.end());

		return ans;

	}
};

int main()
{
	vector<int> deck{ 17,13,11,2,3,5,7 };
	Solution().deckRevealedIncreasing(deck);

    std::cout << "Hello World!\n"; 
}
