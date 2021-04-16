// 1646_get_maximum_in_generated_array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        

        vector<unsigned int>arr(n+1,0);
        arr[1] = 1;
        unsigned int max = 1;
        for (int i = 2; i < n+1; i++)
        {
            if (i%2==0)
            {
                arr[i] = arr[i / 2];
                if (max<arr[i])
                    max = arr[i];
            }
            else
            {
                arr[i] = arr[(i - 1)/2] + arr[(i - 1) / 2+1];
                if (max < arr[i])
                    max = arr[i];
            }

        }

        return max;
    }
};

int main()
{
    std::cout << Solution().getMaximumGenerated(0) << endl;
    std::cout << Solution().getMaximumGenerated(1) << endl;
    std::cout << Solution().getMaximumGenerated(2) << endl;
    std::cout << Solution().getMaximumGenerated(7) << endl;
    std::cout << Solution().getMaximumGenerated(3) << endl;
}

