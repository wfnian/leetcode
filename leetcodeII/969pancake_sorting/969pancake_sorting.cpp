// 969pancake_sorting.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
/*
Example 1:

Input: [3,2,4,1]
Output: [4,2,4,3]
Explanation:
We perform 4 pancake flips, with k values 4, 2, 4, and 3.
Starting state: A = [3, 2, 4, 1]
After 1st flip (k=4): A = [1, 4, 2, 3]
After 2nd flip (k=2): A = [4, 1, 2, 3]
After 3rd flip (k=4): A = [3, 2, 1, 4]
After 4th flip (k=3): A = [1, 2, 3, 4], which is sorted.
*/
class Solution {
public:
	vector<int> pancakeSort(vector<int>& A) {
		int n = A.size();
		vector<int>ans;
		int de = 0;
		vector<int>tmp = A;
		while (n > 0)
		{
			int m_max = tmp[0];
			int index = 0;
			for (size_t i = 0; i < n; i++)//找到0-n范围最大值；
			{
				if (m_max < tmp[i]) {
					index = i;
					m_max = tmp[i];
				}
			}
			//① 反转到最前面
			reverse(tmp.begin(), tmp.begin() + index + 1);;
			ans.push_back(index + 1);
			/*for (auto var : tmp)
				cout << var << " ";
			cout << endl;
			cout << "*" << index + 1 << "*\n";*/
			//② 整个序列翻转；
			reverse(tmp.begin(), tmp.end() - de);
			/*ans.push_back(A.size() - de);
			for (auto var : tmp)
				cout << var << " ";
			cout << endl;
			cout << "*" << A.size() - de << "*\n";*/
			//③ n--
			n--;
			de++;
		}
		return ans;
	}
};

int main() {

	vector<int>s = { 3,2,4,1 };
	Solution().pancakeSort(s);

	return 0;
}