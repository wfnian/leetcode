// 921minimum_add_to_make_parentheses_valid.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
	int minAddToMakeValid(string S) {
		stack<char> tmp;
		for (size_t i = 0; i < S.size(); i++)
		{
			if (!tmp.empty())
			{
				if (S[i] == ')'&&tmp.top() == '(')
					tmp.pop();
				else
					tmp.push(S[i]);
			}
			else
				tmp.push(S[i]);
			
		}
		return tmp.size();
	}
};

int main() {

	return 0;
}

