// 121best_time_to_buy_and_sell_stock.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//121. Best Time to Buy and Sell Stock
/*
Example 1:
Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

Example 2:
Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.
*/
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int res = 0;
		int buy = 100000;
		for (auto pric : prices) {
			buy = min(buy, pric);
			res = max(res, pric-buy);
		}

		return res;
	}
};

int main()
{
	Solution s;
	vector<int> prices = { 7,1,5,3,6,4 };
	cout << s.maxProfit(prices) << endl;

	cout << "Well";
    return 0;
}

