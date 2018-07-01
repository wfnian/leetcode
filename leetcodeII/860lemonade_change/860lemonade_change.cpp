// 860.cpp: 定义控制台应用程序的入口点。
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class Solution {//售货员找钱问题。
public:
	int pos(vector<int>res, int target) {
		for (size_t i = 0; i < res.size(); i++)
		{
			if (res[i] == target)
			{
				return i;
			}
		}
		return -1;
	}
	bool count(vector<int>res, int target) {
		int c = 0;
		for (size_t i = 0; i < res.size(); i++)
		{
			if (res[i] == target)
			{
				c++;
				if (c >= 3)
					return true;
			}
		}
		return false;
	}
	bool isIn(vector<int>& bills, int target) {
		for (size_t i = 0; i < bills.size(); i++)
		{
			if (target == bills[i])
			{
				return true;
			}
		}
		return false;
	}
	//5,5,5,10,5,5,10,20,20,20
	bool lemonadeChange(vector<int>& bills) {
		vector<int>res;

		for (size_t i = 0; i < bills.size(); i++)
		{
			if (bills[i] == 5)
				res.push_back(5);
			if (bills[i] == 10)
			{
				if (isIn(res, 5)) {
					res.erase(res.begin() + pos(res, 5));
					res.push_back(10);
				}
				else
					return false;
			}
			if (bills[i] == 20)
			{
				if (isIn(res, 5) && isIn(res, 10)) {
					res.erase(res.begin() + pos(res, 5));
					res.erase(res.begin() + pos(res, 10));

					res.push_back(20);
				}
				else if (count(res, 5))
				{
					res.erase(res.begin() + pos(res, 5));
					res.erase(res.begin() + pos(res, 5));
					res.erase(res.begin() + pos(res, 5));
					res.push_back(20);
				}
				else
					return false;
			}
		}
		return true;
	}
};



int main()
{
	Solution s;

	vector<int> bills = { 5,5,5,10,5,5,10,20,20,20 };
	cout << (s.lemonadeChange(bills) == 1 ? "true" : "false") << endl;

	return 0;
}

