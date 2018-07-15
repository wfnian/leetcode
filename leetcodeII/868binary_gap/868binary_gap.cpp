// 868_2.cpp: 定义控制台应用程序的入口点。
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>

/*
Example 1:

Input: 22
Output: 2
Explanation:
22 in binary is 0b10110.
In the binary representation of 22, there are three ones, and two consecutive pairs of 1's.
The first consecutive pair of 1's have distance 2.
The second consecutive pair of 1's have distance 1.
The answer is the largest of these two distances, which is 2.
Example 2:

Input: 5
Output: 2
Explanation:
5 in binary is 0b101.

///计算两个1之间的距离。
*/

using namespace std;

class Solution {
public:
	int binaryGap(int N) {
		int res = 0;
		int ans = -1;
		int i = 0;
		while (N != 0)
		{
			i++;
			if ((N & 1) == 1)
			{
				if (ans != -1)
					res = res > (i - ans) ? res : (i - ans);
				ans = i;       // 及时更新上次的1的位置。
			}
			N = N >> 1;
		}
		cout << res << endl;;
		return res;
	}
};


int main()
{
	Solution s;

	s.binaryGap(22);
	s.binaryGap(5);
	s.binaryGap(6);
	s.binaryGap(8);
	return 0;
}

