// leetcodeII.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool checkInclusion(string s1, string s2) {
		int ans = 0;
		int pos = 0;
		for (size_t i = 0; i < s2.length(); i++)
		{
			if (s1.find(s2[i])>=0&& s1.find(s2[i])<s1.length()) {
				pos = s1.find(s2[i]);
				s1[pos] = '*';
				ans++;
			}
			else ans = 0;
			if (ans >= s1.length())
				return true;
		}
		return false;
	}
};

int main()//WRONG answer!!!
{

	string s1, s2;
	s1 = "ab", s2 = "eidbaooo";
	Solution solution;
	int result = solution.checkInclusion(s1, s2);
	cout << (result ? "true" : "false") << endl;

	string s3, s4;
	s3 = "prosperity", s4 = "properties";
	Solution solution2;
	int result2 = solution2.checkInclusion(s3, s4);
	cout << (result2 ? "true" : "false") << endl;

    return 0;
}

