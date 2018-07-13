#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:

	bool isPrime(int n) {
		if (n<2)  // зЂвт
			return false;

		for (size_t i = 2; i <= sqrt(n); i++)
			if (n%i == 0)
				return false;

		return true;

	}
	int countOnes(int num) {
		int res = 0;
		while (num != 0)
		{
			if (num & 1 == 1)
				res++;
			num = num >> 1;

		}
		return res;
	}
	int countPrimeSetBits(int L, int R) {
		int res = 0;
		for (size_t i = L; i <= R; i++)
			if (isPrime(countOnes(i)))
				res++;
		return res;
	}
};

int main()
{
	Solution s;
	cout << s.countPrimeSetBits(6, 100) << endl;


	return 0;
}