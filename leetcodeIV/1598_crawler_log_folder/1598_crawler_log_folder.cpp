// 1598_crawler_log_folder.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res = 0;
        for (auto &i : logs)
        {
            if (i.compare("../") == 0)
            {
                if (res != 0)
                    res--;
            }
            else if (i.compare("./") == 0)
                ;
            else
                res++;
            
        }
        return res;
    }
};



int main()
{
    vector<string> str = { "d1/","d2/","../","d21/","./" };

    Solution().minOperations(str);
    vector<string> str1 = { "d1/","../","../","../" };
    Solution().minOperations(str1);

    return 0;
}

