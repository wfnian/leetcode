// 942di_string_match.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> diStringMatch(string S) {
		vector<int>tmp;
		for (size_t i = 0; i <= S.size(); i++)
			tmp.push_back(i);
		int p1 = 0, p2 = tmp.size() - 1;
		vector<int>ans;
		for (size_t i = 0; i < S.size(); i++)
		{
			if (S[i] == 'I')
			{
				ans.push_back(tmp[p1]);
				p1++;
			}
			else {
				ans.push_back(tmp[p2]);
				p2--;
			}
		}
		ans.push_back(tmp[p1]);
		//for (auto var : ans)
		//	cout << var << " ";
		return ans;
	}
};

int main() {
	//https://leetcode.com/problems/di-string-match/
	Solution().diStringMatch("IDID"); cout << endl;
	Solution().diStringMatch("III"); cout << endl;

	return 0;
}