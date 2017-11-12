// 696count_binary_substrings.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
/*思路：使用2个变量来存储当前数字前的数字连续次数pre以及当前数字的连续次数cur。如果当前数字与前一个数字连续，则计算出当前数字连续的次数cur，否则统计当前数字之前的数字连续次数pre并令当前数字连续次数cur为1。接着通过判断统计子数组的个数，如果这时该数字之前的数字连续次数pre大于等于当前数字连续次数cur，则令子数组个数res加1。
*/
class Solution {
public:
	int countBinarySubstrings(string s) {
		int pre = 0, cur = 1, res = 0;
		for (int i = 1; i != s.size(); i++) {
			if (s[i] == s[i - 1]) {
				cur++;
			}
			else {
				pre = cur;
				cur = 1;
			}
			if (pre >= cur)
				res++;
		}
		return res;
	}
};

int main()
{
	Solution s = Solution();
	cout << s.countBinarySubstrings("00110011");
    return 0;
}

