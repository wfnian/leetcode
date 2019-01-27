// 984string_without_aaa_or_bbb.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string strWithout3a3b(int A, int B) {
		string res = "";
		if (A>B&&B!=0)
		{
			for (size_t i = 0; i < A; i++)
				res.append("a");
			
			int paddle = A / B >= 2 ? 2 : 1;
			int temp = paddle;
			for (size_t i = 0; i < B; i++)
			{
				res.insert(temp, "b");
				temp = temp + paddle+1;
			}
		}
		else if(A!=0)
		{
			for (int i = 0; i < B; i++)
				res.append("b");

			int paddle = B / A >= 2 ? 2 : 1;
			int temp = paddle;
			for (int i = 0; i < A; i++)
			{
				res.insert(temp, "a");
				temp = temp+paddle+1;
			}
		}
		/*if (res.size()>2&&res[res.size()-1]=='b'&&res[res.size() - 2] == 'b'&&res[res.size() - 3] == 'b')
		{
			res = "bb" + string(res.begin(), res.end() - 2);
		}
		if (res.size() > 2 && res[res.size() - 1] == 'a'&&res[res.size() - 2] == 'a'&&res[res.size() - 3] == 'a')
		{
			res = "aa" + string(res.begin(), res.end() - 2);
		}*/

		cout << res << endl;
		return res;
	}
};
string strWithout3a3b(int A, int B) {
	if (A == 0) return string(B, 'b');
	else if (B == 0) return string(A, 'a');
	else if (A == B) return "ab" + strWithout3a3b(A - 1, B - 1);
	else if (A > B) return "aab" + strWithout3a3b(A - 2, B - 1);
	else return strWithout3a3b(A - 1, B - 2) + "abb";
}
int main()
{
	Solution().strWithout3a3b(2, 4);
	Solution().strWithout3a3b(4, 2);
	Solution().strWithout3a3b(4, 7);
	Solution().strWithout3a3b(7, 4);
	Solution().strWithout3a3b(27, 33);


    std::cout << "Hello World!\n"; 
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
