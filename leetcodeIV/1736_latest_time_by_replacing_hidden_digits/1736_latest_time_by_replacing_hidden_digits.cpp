// 1736_latest_time_by_replacing_hidden_digits.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using namespace std;

/* 题目地址：
https://leetcode-cn.com/problems/latest-time-by-replacing-hidden-digits/solution/if-elsejiu-ji-zhuan-jia-by-uive-vnkj/
*/

class Solution {
public:
	string maximumTime(string time) {

		if (time[1] == '?') {
			if (time[0] == '?') {
				time[0] = '2';
				time[1] = '3';
			}
			else if (time[0] <= '1')
				time[1] = '9';
			else
				time[1] = '3';
		}
		else {
			if (time[1] < '4')
				if (time[0] == '?')
					time[0] = '2';
				else
					if (time[0] == '?')
						time[0] = '1';
		}
		if (time[3] == '?')
			time[3] = '5';
		if (time[4] == '?')
			time[4] = '9';
		return time;
	}
};

int main()
{
	cout << Solution().maximumTime("2?:?0") << endl;
	cout << Solution().maximumTime("0?:3?") << endl;
	cout << Solution().maximumTime("1?:22") << endl;
	cout << Solution().maximumTime("?0:15") << endl;

	return 0;
}

