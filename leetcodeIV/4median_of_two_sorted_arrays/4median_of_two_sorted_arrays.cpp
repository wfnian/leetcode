#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int>res;
		int i(0), j(0);
		while (i < nums1.size() && j < nums2.size())
		{
			if (nums1[i] < nums2[j])
			{
				res.push_back(nums1[i]);
				i++;
			}
			else
			{
				res.push_back(nums2[j]);
				j++;
			}
		}
		while (i < nums1.size())
		{
			res.push_back(nums1[i]);
			i++;
		}
		while (j < nums2.size())
		{
			res.push_back(nums2[j]);
			j++;
		}

		if (res.size() % 2 != 0)
		{
			return res[res.size() / 2];
		}

		return (res[res.size() / 2] + res[res.size() / 2 - 1]) / 2.0;


		return 0;
	}
};

int main() {
	vector<int>nums1{ 1,2,3 };
	vector<int>nums2{  };

	cout << Solution().findMedianSortedArrays(nums1, nums2) << endl;


	system("pause");
	return 0;

}