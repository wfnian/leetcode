// 667beautiful_arrangement_II.cpp: 定义控制台应用程序的入口点。
//
/*
Given two integers n and k, you need to construct a list which contains n different positive integers ranging from 1 to n and obeys the following requirement:
Suppose this list is [a1, a2, a3, ... , an], then the list [|a1 - a2|, |a2 - a3|, |a3 - a4|, ... , |an-1 - an|] has exactly k distinct integers.

If there are multiple answers, print any of them.
*/
#include "stdafx.h"
#include<iostream>
#include"beautiful_arrangement_II.h"


int main()
{
	Solution solution = Solution();
	solution.constructArray(6, 4);
	cout << endl;
	Solution solution1 = Solution();
	solution1.constructArray(6, 3);
	cout << endl;
	Solution solution2 = Solution();
	solution2.constructArray(3, 1);
    return 0;
}

