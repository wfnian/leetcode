// 922sort_array_by_parity_II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {
		int i = 0;
		int j = A.size() - 1;
		int size = A.size() - 1;
		int temp;
		while (i < A.size() - 1)
		{
			if ((i % 2 == 0 && A[i] % 2 == 0) || (i % 2 != 0 && A[i] % 2 != 0)) {
				i++;
				continue;
			}
			else {
				if (i % 2 == 0)
					while (i < j) {
						if (A[j] % 2 == 0) {
							temp = A[i];
							A[i] = A[j];
							A[j] = temp;
							j = size;
							break;
						}
						else j--;
					}
				else {
					while (i < j)
						if (A[j] % 2 != 0) {
							temp = A[i];
							A[i] = A[j];
							A[j] = temp;
							j = size;
							break;
						}
						else j--;
				}
			}
		}
		//for (auto var : A)
		//	cout << var << " ";
		//cout << endl;
		return A;

	}
};

//另一个别人的高明的解法：
/*	Java.
class Solution {
	public int[] sortArrayByParityII(int[] A) {
		int i = 0, j = 1, n = A.length;
		while (i < n && j < n) {
			while (i < n && A[i] % 2 == 0) {
				i += 2;
			}
			while (j < n && A[j] % 2 == 1) {
				j += 2;
			}
			if (i < n && j < n) {
				swap(A, i, j);
			}
		}
		return A;
	}
	private void swap(int[] A, int i, int j) {
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
}
*/

int main()
{
	vector<int> A{ 4,2,5,7 };
	Solution().sortArrayByParityII(A);
	vector<int> Aa{ 2,3,1,1,4,0,0,4,3,3 };
	Solution().sortArrayByParityII(Aa);
}

