// 929unique_email_addresses.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		//test.email+alex@leetcode.com
		set<string> ans;
		for (size_t i = 0; i < emails.size(); i++)
		{
			string tmp = "";
			for (size_t j = 0; j < emails[0].size(); j++)
			{
				if (emails[i][j] == '@') {
					tmp.append(emails[i].begin() +j, emails[i].end());
					break;

				}
				if (emails[i][j] != '.'&&emails[i][j] != '+')
					tmp.append(1, emails[i][j]);
				
				if (emails[i][j]=='+')
				{
					while (emails[i][j]!='@') j++;
					tmp.append(emails[i].begin()+j, emails[i].end());
					break;
				}
				
			}
			ans.insert(tmp);
		}

		return ans.size();
	}
};

int main()
{
	vector<string> s = { "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" };
	Solution().numUniqueEmails(s);

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
