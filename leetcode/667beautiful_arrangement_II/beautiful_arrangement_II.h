#pragma once
#include<vector>
#include<iostream>
using namespace std;

class Solution
{
public:
	vector<int> constructArray(int n, int k) {
		vector<int> list2 = vector<int>();
		int ans2 = 0;
		for (size_t i = 1; i <= n; i++) {
			list2.push_back(i);
			ans2++;
			if (ans2 == k )
				break;
			list2.push_back(n-i+1);
			ans2++;
			if (ans2 == k )
				break;
		}
		ans2 = 0;
		while (list2.size()<n){
			if (ans2 == 3)
				list2.push_back(list2[list2.size() - 1] + 1);
			if (ans2 == 4)
				list2.push_back(list2[list2.size() - 1] - 1);
			if (list2.size()<=1||ans2 == 0 && (list2[list2.size() - 1] < list2[list2.size() - 2])) {
				list2.push_back(list2[list2.size() - 1] + 1);
				ans2 = 3;
			}
			if(ans2!=3&&ans2!=4)
			{
				list2.push_back(list2[list2.size() - 1] - 1);
				ans2 = 4;
			}
			
		}
		for (size_t i = 0; i < list2.size(); i++)
			cout << list2[i] << " ";
		return list2;
	}

};

