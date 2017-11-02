/*
10. Regular Expression Matching
https://leetcode.com/problems/regular-expression-matching/description/
*/

#include<iostream>
#include<string>
#include<regex>
using namespace std;

class Solution {
public:
	bool isMatch(string s, string p) {
		return regex_match(s, regex(p));
	}
};

int main()
{
	Solution solution;
	cout<<solution.isMatch("aa", "a*")<<endl;

	return 0;
}

