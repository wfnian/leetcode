// 1688_count_of_matches_in_tournament.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Solution {
public:
	int numberOfMatches(int n) {
		int times = 0;
		while (true)
		{
			times += n % 2;
			times += n / 2;
			n = n / 2;
			if (n==0)
				break;
		}

		return times-1;
	}
};



int main()
{
	cout << Solution().numberOfMatches(7) << endl;
	cout << Solution().numberOfMatches(14) << endl;
	cout << Solution().numberOfMatches(4) << endl;
}

