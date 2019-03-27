#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string reverseWords(string s) {
		int start = 0;
		for (size_t i = 0; i < s.size(); i++){
			if (s[i]==' ')
			{
				reverseString(s, start, i-1);
				start = i + 1;

			}
		}
		reverseString(s, start, s.size() - 1);
		return s;
	}
	void reverseString(string &s, int begin, int end) {
		char temp;
		while (begin < end)
		{
			temp = s[begin];
			s[begin] = s[end];
			s[end] = temp;
			begin++;
			end--;
		}
		
	}
};

int main() {

	string s = "s'teL ekat edoCteeL tsetnoc";
	//Solution().reverseString(s, 0, s.size() - 1);
	cout << Solution().reverseWords(s) << endl;
	cout << s;

	system("pause");
	return 0;
}