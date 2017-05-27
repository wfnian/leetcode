//492construct_the_rectangle
#include"stdio.h"
#include<math.h>
#include<malloc.h>
int* constructRectangle(int area, int* returnSize) {
	int ans = sqrt(area);
	while (1)
	{
		if (area%ans == 0)
			break;
		ans--;
	}
	int num[2];
	num[0] = ans;
	num[1] = area / ans;
	*returnSize = 2;
	return num;
}
int main(void) {
	int  *s;// = (int*)malloc(sizeof(int) * 10);
	int m;
	s = constructRectangle(14, &m);
	printf("%d\n", s[1]);
	printf("%d\n", m);
}
/*Python
import math
class Solution(object):
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        ans = int(math.sqrt(area))
        while 1:
            if area % ans == 0:
                break
            ans = ans + 1
        return [area//ans,ans]
a = Solution()
print(a.constructRectangle(9999998))
*/