// 593valid_square.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution {
public:

	bool validSquare(vector<int>& p1/*A*/, vector<int>& p2/*B*/, vector<int>& p3/*C*/, vector<int>& p4/*D*/) {
		vector<int> distance;
		distance.push_back(abs((p1[0] - p2[0])*(p1[0] - p2[0]) + (p1[1] - p2[1])*(p1[1] - p2[1])));
		distance.push_back(abs((p1[0] - p3[0])*(p1[0] - p3[0]) + (p1[1] - p3[1])*(p1[1] - p3[1])));
		distance.push_back(abs((p1[0] - p4[0])*(p1[0] - p4[0]) + (p1[1] - p4[1])*(p1[1] - p4[1])));
		distance.push_back(abs((p2[0] - p3[0])*(p2[0] - p3[0]) + (p2[1] - p3[1])*(p2[1] - p3[1])));
		distance.push_back(abs((p2[0] - p4[0])*(p2[0] - p4[0]) + (p2[1] - p4[1])*(p2[1] - p4[1])));
		distance.push_back(abs((p3[0] - p4[0])*(p3[0] - p4[0]) + (p3[1] - p4[1])*(p3[1] - p4[1])));
		sort(distance.begin(), distance.end());
		if((distance[0]== distance[1]== distance[2]== distance[3])&&(distance[4]== distance[5]))
			return true;
		return false;
	}
};

int main()
{
	
	std::ios::sync_with_stdio(false);   //io速度控制。
	std::cin.tie(0);					//

	vector<int>p1{ 0,0 }, p2{ -1,0 }, p3{ 1,0 }, p4{ 0,1 };
	//vector<int>p1{ 1,0 }, p2{ -1,0 }, p3{ 0,1 }, p4{ 0,-1 };
	/*[1, 0]
	[-1, 0]
	[0, 1]
	[0, -1]*/
	Solution sol;
	cout << sol.validSquare(p1, p2, p3, p4);
	return 0;
}


