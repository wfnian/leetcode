// 917reverse_only_letters.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <cctype>
using namespace std;
/*
Given a string S, return the "reversed" string where all characters 
that are not a letter stay in the same place, and all letters reverse
their positions.
Example 2:

Input: "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
*/

class Solution2 {
public:
	string reverseOnlyLetters(string S) {
		vector<char> res;
		vector<int> Nletters;
		vector<char> letter;
		for (size_t i = 0; i < S.size(); i++)
			if (isalpha(S[i]))//"ab-cd"
				letter.push_back(S[i]);
			else
				Nletters.push_back(i);

		reverse(letter.begin(), letter.end());
		int j = 0;
		for (size_t i = 0; i < letter.size() + Nletters.size(); i++)
		{
			if (j < Nletters.size() && i == Nletters[j]) {
				res.push_back(S[Nletters[j]]);
				j++;
			}
			else
				res.push_back(letter[i - j]);

		}

		return string(res.begin(), res.end());
	}
};

class Solution {
public:
	string reverseOnlyLetters(string S) {
		int i = 0;
		int j = S.size() - 1;
		while (i < j)
		{

			if (!isalpha(S[i]))
			{
				i++;
				continue;
			}
			if (!isalpha(S[j]))
			{
				j--;
				continue;
			}
			char temp = S[i];
			S[i] = S[j];
			S[j] = temp;
			i++; j--;
		}
		return S;

	}
};
int main()
{
	cout << Solution2().reverseOnlyLetters("Test1ng-Leet=code-Q!") << endl;
	cout << Solution2().reverseOnlyLetters("ab-cd") << endl;
	cout << Solution2().reverseOnlyLetters("a-bC-dEf-ghIj") << endl;
}

