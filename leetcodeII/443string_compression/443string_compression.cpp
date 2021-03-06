// 443string_compression.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

//class Solution {//WRONG!
//public:
//	int compress(vector<char>& chars) {
//		int ans=1,old;
//		vector<char> retval;
//		set<char> arr;
//		old = arr.size();
//		for (size_t i = 0; i < chars.size(); i++)
//		{
//			arr.insert(chars[i]);
//			if (arr.size() > old) {
//				if (ans != 1) {
//					string s = to_string(ans);
//					for (size_t j = 0; j < s.size(); j++)
//					{
//						retval.push_back(s[j]);
//					}
//				}
//				retval.push_back(chars[i]);
//			}
//			else {
//				ans++;
//			}
//			old = arr.size();
//			ans = 1;
//		}
//		if (ans != 1) {
//			string s = to_string(ans);
//			for (size_t j = 0; j < s.size(); j++)
//			{
//				retval.push_back(s[j]);
//			}
//		}
//		for (size_t i = 0; i < retval.size(); i++)
//			chars[i] = retval[i];
//		return retval.size();
//	}
//};
class Solution {
public:
	int compress(vector<char>& chars) {
		if (chars.size() <= 1) {
			return chars.size();
		}
		int ans = 1;
		vector<char> cha;
		cha.push_back(chars[0]);
		for (size_t i = 1; i < chars.size(); i++)
		{
			if (chars[i] == cha.at(cha.size() - 1))
				ans++;
			else
			{
				if (ans == 1) {
					cha.push_back(chars[i]);
				}
				else
				{
					string s = to_string(ans);
					for(int k=0;k<s.length();k++)
					{
						cha.push_back(s[k]);
					}
					cha.push_back(chars[i]);
					ans = 1;
				}
			}
		}
		if (ans != 1) {
			string s = to_string(ans);
			for (int k = 0; k < s.length(); k++)
				cha.push_back(s[k]);
		}
		for (size_t i = 0; i < cha.size(); i++)
		{
			chars[i] = cha[i];
		}
		return cha.size();
	}
};
int main()
{
	vector<char> c{ 'a','b','b','b','b','b','b','b','b','b','b','b','b' };
	vector<char> b{'a'};
	vector<char> a{ 'a','a','b','b','c','c','c' };
	unsigned int size;
	//what if    a, a, a, b, b, a, a  : answer is a 3 b 2 a 2.
	Solution s;
	size = s.compress(c);
	for (size_t i = 0; i < size; i++) { cout << c[i] << " "; }cout << endl;
	size = s.compress(b);
	for (size_t i = 0; i < size; i++) { cout << b[i] << " "; }cout << endl;
	size = s.compress(a);
	for (size_t i = 0; i < size; i++) { cout << a[i] << " "; }cout << endl;
    return 0;
}

