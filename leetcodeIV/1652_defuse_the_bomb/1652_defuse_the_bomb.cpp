// 1652_defuse_the_bomb.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	vector<int> decrypt(vector<int>& code, int k) {
		vector<int> res;
		int size = code.size();
		res.assign(size, 0);
		if (k==0)	{
			code.assign(size, 0);
		}
		if (k>0)
		{
			for (int i = 0; i < size; i++)
			{
				int temp = 0;
				for (int j = 0; j < k; j++)
					temp += code[(i +j+ 1) % size];
				res[i] = temp;
			}

		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				int temp = 0;
				for (int j = 0; j < (-k); j++)
					temp += code[(size+i - j -1) % size];
				res[i] = temp;
			}
		}
		for (int val : res)
			cout << val << " ";
		cout << endl;
		return res;
	}
};


int main()
{
	vector<int>code = { 10, 5, 7, 7, 3, 2, 10, 3, 6, 9, 1, 6 };
	Solution().decrypt(code,-4);
}

