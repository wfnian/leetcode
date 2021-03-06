// 807max_increase_to_keep_city_skyline.cpp: 定义控制台应用程序的入口点。
//
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution { //矩阵有点绕啊，画图，画图。 接下来要尝试数据结构、算法分析了。
public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
		int col = grid.size();
		int row = grid[0].size();
		vector<int> COLMAX;
		vector<int> ROWMAX;
		vector<int> temp;
		int ans = 0;
		//std::max(COLMAX, [](const int& s1, const int& s2) {return s1 > s2;});
		//std::max({ 1,2,3,4 }, [](const int& s1, const int& s2) {return s1 > s2; });
		for (size_t i = 0; i < col; i++)
			COLMAX.push_back(*max_element(grid[i].begin(), grid[i].end()));
		for (size_t j = 0; j < row; j++){
			for (size_t i = 0; i < col; i++)
				temp.push_back(grid[i][j]);
			ROWMAX.push_back(*max_element(temp.begin(), temp.end()));
			temp.clear();
		}
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				ans += -grid[i][j] + min(COLMAX[i], ROWMAX[j]);
				//cout << grid[i][j] << " ";
			}
			//cout << endl;
		}
		return ans;
	}
};

int main()
{
	Solution s;
	vector<vector<int>> grid{ {3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0} };
	s.maxIncreaseKeepingSkyline(grid);

    return 0;
}

