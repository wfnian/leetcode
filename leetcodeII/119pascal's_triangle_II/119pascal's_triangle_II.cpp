// 119pascal's_triangle_II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution { // my algorithm  use more than  O(k) extra space.
public:
	vector<int> getRow(int rowIndex) {
		vector<vector<int>> yh{ {1} ,{1,1} };
		vector<int> mid;
		if (rowIndex == 0)
			return yh[0];
		if (rowIndex == 1)
			return yh[1];
		for (size_t i = 1; i < rowIndex; i++)
		{
			mid.push_back(1);
			for (size_t j = 1; j < yh[i].size(); j++)
				mid.push_back(yh[i][j] + yh[i][j - 1]);
			mid.push_back(1);
			yh.push_back(mid);
			if (i == rowIndex - 1)
				return mid;
			mid.clear();
		}

		return vector<int>{};

	}
};
// another solution use O(k) extra space.
class Solution2 {
public:
	vector<int> getRow(int rowIndex) { // 数组大小是 rowIndex + 1
		vector<int> result(rowIndex + 1);
		for (int i = 0; i <= rowIndex; i++) {
			result[i] = 1;
			for (int j = i - 1; j > 0; j--) {
				result[j] = result[j] + result[j - 1];
			}
		}
		return result;
	}
};

int main()
{
	Solution().getRow(4);
	
	for (int i = 0; i < -1; i++)
	{
		cout << "execute" << endl;
	}

	return 0;
	
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
