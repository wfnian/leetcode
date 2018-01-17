// 760find_anagram_mappings.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool isIn(const vector<int> a, const int b) {
		for (size_t i = 0; i < a.size(); i++)
		{
			if (b == a[i])
				return true;
		}
		return false;
	}
	vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
		vector<int> retval;
		for (size_t i = 0; i < A.size(); i++)
		{
			for (size_t j = 0; j < B.size(); j++)
			{
				if (A[i]==B[j] && isIn(retval,j)==false)
				{
					retval.push_back(j);
				}
			}
		}
		return retval;
	}
};
int main()//WRONG answer!
{
	/*
	[21,5,74,5,74,21]
	[21,5,74,74,5,21]
	*/
	vector<int> a{ 21,5,74,5,74,21 };
	vector<int> b{ 21,5,74,74,5,21 };
	vector<int> c;
	Solution solution;
	c = solution.anagramMappings(a, b);
	for (int i = 0; i < c.size(); i++)
		cout << c[i] << " ";
	
    return 0;
}
/*

class Solution:
    def anagramMappings(self, A, B)://right answer!
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        C = []
        for i in A:
            C.append(B.index(i))
        return C


def main():
    A = [1, 1]
    B = [1, 1]
    s = Solution
    C = s.anagramMappings(Solution, A, B)
    print(C)


if __name__ == '__main__':
    main()

*/

