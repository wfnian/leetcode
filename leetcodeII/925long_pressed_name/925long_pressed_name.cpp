// 925long_pressed_name.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
/*
Your friend is typing his name into a keyboard.  Sometimes, 
when typing a character c, the key might get long pressed, 
and the character will be typed 1 or more times.

You examine the typed characters of the keyboard.  Return 
True if it is possible that it was your friends name, with 
some characters (possibly none) being long pressed.
*/

/*
Example 2:
Input: name = "saeed", typed = "ssaaedd"
Output: false
Explanation: 'e' must have been pressed twice, but it wasn't in the typed output.

Example 3:
Input: name = "leelee", typed = "lleeelee"
Output: true
*/
using namespace std;
class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		int i = 0, j = 0;
		while (i < name.size() || j < typed.size()) {
			if (name[i] == typed[j]) {
				i++;
				j++;
			}
			else if (i > 0 && j > 0) {
				if (typed[j] == name[i - 1])
					j++;
				else return false;
			}
			else return false;
		}
		return true;
	}
};


int main() {
	string name = "a", typed = "aaaa";
	cout << Solution().isLongPressedName(name, typed) << endl;
	string name1 = "saeed", typed1 = "ssaaedd";
	cout << Solution().isLongPressedName(name1, typed1) << endl;
	string name2 = "leelee", typed2 = "lleeelee";
	cout << Solution().isLongPressedName(name2, typed2) << endl;

	return 0;
}