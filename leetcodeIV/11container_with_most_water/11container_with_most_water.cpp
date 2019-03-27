// 11container_with_most_water.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	inline int _min(const int &a, const int &b) {
		if (a>b)
			return b;
		return a;
	}

	int maxArea(vector<int>& height) {
		int max_area = 0;
		int l = 0, r = height.size() - 1;
		while (l < r)
		{
			if ((r-l)*_min(height[l],height[r])>max_area)
				max_area = (r - l)*_min(height[l], height[r]);
			if (height[l] < height[r])
				l++;
			else
				r--;
		}
		return max_area;
	}
};

int main()
{
	vector<int>arr{ 1,8,6,2,5,4,8,3,7 };
	cout << Solution().maxArea(arr) << endl;
	cout << Solution()._min(2, 3);
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
