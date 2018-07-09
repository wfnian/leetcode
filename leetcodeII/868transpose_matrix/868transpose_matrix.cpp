// 868.cpp: 定义控制台应用程序的入口点。
//

#include <iostream>
#include <vector>

using namespace std;
class Solution { // 矩阵的转置
public:
	vector<vector<int>> transpose(vector<vector<int>>& A) {
		vector<vector<int>> res;
		for (int i = 0; i<A[0].size(); i++)
			res.push_back({});
		for (size_t i = 0; i < A[0].size(); i++)
			for (size_t j = 0; j < A.size(); j++)
				res[i].push_back(A[j][i]); // 比较抽象。

		return res;
	}
};

int main()
{
	vector<vector<int>> ans = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };
	vector<vector<int>> res;
	res = Solution().transpose(ans);
	for (size_t i = 0; i < res.size(); i++)
	{
		for (size_t j = 0; j < res[0].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

