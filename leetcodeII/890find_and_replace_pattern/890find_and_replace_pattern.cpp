// 890find_and_replace_pattern.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

/*
Example 1:

Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]
Explanation: "mee" matches the pattern because there is a permutation 
{a -> m, b -> e, ...}.
"ccc" does not match the pattern because {a -> c, b -> c, ...} is not
a permutation, since a and b map to the same letter.
*/
using namespace std;

class Solution { //wrong answer
public:
	vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
		vector<int> pt;
		vector<int> wd;
		int counter = 1;
		vector<string> res;
		for (size_t i = 1; i < pattern.size(); i++) {
			if (pattern[i] == pattern[i - 1])
				counter++;
			else {
				pt.push_back(counter);
				counter = 1;
			}
		}
		pt.push_back(counter);

		for (size_t i = 0; i < words.size(); i++) {
			int ct = 1;
			for (size_t j = 1; j < words[i].size(); j++) {
				if (words[i][j] == words[i][j - 1])
					ct++;
				else {
					wd.push_back(ct);
					ct = 1;
				}
			}
			wd.push_back(ct);

			if (wd == pt)
				res.push_back(words[i]);
			wd.clear();
		}

		return words;
	}
};

class Solution2 { //Accepted!
public:
	int types(string s, char c) {
		for (size_t i = 0; i < s.size(); i++)
			if (c == s[i])
				return i;

		return -1;
	}
	vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
		vector<int> pt;
		vector<string> res;
		for (size_t i = 0; i < pattern.size(); i++)
			pt.push_back(this->types(pattern, pattern[i]));
		
		for (size_t i = 0; i < words.size(); i++)
		{
			vector<int> wd;
			for (size_t j = 0; j < words[i].size(); j++)
			{
				wd.push_back(this->types(words[i], words[i][j]));
			}
			if (wd == pt)
				res.push_back(words[i]);
		}
		for (auto var : res)
			cout << var << endl;
		return res;
	}

};

int main() {
	cout << "well" << endl;
	vector<string> words = { "abc","cba","xyx","yxx","yyx" };
	string pattern = "abc";

	Solution2 s;
	s.findAndReplacePattern(words, pattern);

	int a;
	cin >> a;
}