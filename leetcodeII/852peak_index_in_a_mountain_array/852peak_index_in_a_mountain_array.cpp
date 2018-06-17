#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/*
Given an array that is definitely a mountain, return any i such that
A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

clearly : we need to found the position of the max.
*/
class Solution {
public:
	int peakIndexInMountainArray(vector<int>& A) {
		auto c = max_element(A.begin(), A.end());
		for (size_t i = 0; i < A.size(); i++)
			if (A[i] == *c)
				return i;
		return 0;
	}
};

int main() {
	Solution s;
	vector<int> A = { 0,2,1,0 };
	cout << s.peakIndexInMountainArray(A);


	return 0;
}