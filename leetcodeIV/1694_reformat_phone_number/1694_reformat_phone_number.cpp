

#include <iostream>
#include <string>
#include <stack>


using namespace std;


class Solution {
public:
	string reformatNumber(string number) {
		string digit;
		string res;
		int size(0);
		for (size_t i = 0; i < number.size(); i++)
		{
			if (number[i] <= '9'&&number[i] >= '0') {
				digit.push_back(number[i]);
				size++;
			}

		}
		
		if (size % 3 == 1)
		{
			for (size_t i = 0; i < size; i++)
			{
				if (i>=size-4)
				{
					if(size-4!=0)res.push_back( '-');
					res.push_back(digit[i]);
					res.push_back(digit[i+1]);
					res.push_back('-');
					res.push_back(digit[i+2]);
					res.push_back(digit[i+3]);
					i = size - 1;
				}
				else {
					if (i % 3 == 0 && i != 0)
					{
						res.push_back('-');
					}
					res.push_back(digit[i]);
				}
			}
		}
		else 
		{
			for (size_t i = 0; i < size; i++)
			{
				if (i % 3 == 0 && i != 0)
				{
					res.push_back('-');
				}
				res.push_back(digit[i]);
			}
		}
		cout << res;
		return res;
	}
};

int main()
{
	cout << Solution().reformatNumber("1 - 23 - 45 6")<<endl;
	cout << Solution().reformatNumber("1234567")<<endl;
	cout << Solution().reformatNumber("123 4")<<endl;
	cout << Solution().reformatNumber("123 4-5678")<<endl;
	cout << Solution().reformatNumber("12")<<endl;
	cout << Solution().reformatNumber("--17-5 229 35-39475 ")<<endl;
}

