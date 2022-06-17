// 0097_interleaving_string.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Solution {
public:
    bool smallIsInterleave(string s1, string s2, string s3) {
        vector<int> mark(s3.size(), 1);

        int index = 0;
        for (auto& chr : s1)
        {
            while (index < s3.size())
            {
                if (chr == s3[index])
                {
                    mark[index] = 0;
                    index++;
                    break;
                }
                else
                    index++;

            }
        }
        int sum = 0;
        for (auto& i : mark)
            if (!i)
                sum++;
        if (sum != s1.size())
            return false;
        
        index = 0;
        for (auto& chr : s2)
        {
            while (index < s3.size())
            {
                if (chr == s3[index] && mark[index] == 1)
                {
                    mark[index] = 0;
                    index++;
                    break;
                }
                else
                {
                    index++;
                }
            }
        }

        for (auto& i : mark)
            if (i)
                return false;

        return true;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if (s1.size() + s2.size() != s3.size())
            return false;
        return smallIsInterleave(s1, s2, s3) | smallIsInterleave(s2, s1, s3);
    }
};

int main()
{
    cout << Solution().isInterleave("aabcc", "dbbca", "aadbbcbcac") << endl;
    cout << Solution().isInterleave("aabcc", "dbbca", "aadbbbaccc") << endl;
    cout << Solution().isInterleave("", "", "") << endl;
}

