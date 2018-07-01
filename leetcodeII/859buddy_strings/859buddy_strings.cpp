// 859.cpp: 定义控制台应用程序的入口点。
//

#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
	/*
	1，长度不相等的两个字符串一定不可能满足条件。
	2，两个完全相等的字符串，只要这个字符串由相同的字符，就可以满足条件。
	3，对于两个长度相等的字符串，记录它们字符不相等的索引位置。如果不相等的字符的
	个数为2个而且  满足交叉相等，则这样的字符串就是满足条件的。
	*/
public:
	bool buddyStrings(string A, string B) {
		if (A.length() != B.length())
			return false;
		if (A == B)
			return (set<char>(A.begin(), A.end()).size() < A.size());
		vector<int> pos;
		for (size_t i = 0; i < A.length(); i++)
		{
			if (A[i] != B[i])
				pos.push_back(i);
			if (pos.size() == 3)
				break;
		}
		return (pos.size() == 2 && A[pos[0]] == B[pos[1]] && A[pos[1]] == B[pos[0]]);

	}
};

int main()
{
	Solution s;
	cout << s.buddyStrings("ab", "ba") << endl;
	cout << s.buddyStrings("aa", "aa") << endl;
	cout << s.buddyStrings("ab", "ab") << endl;
	return 0;
}

