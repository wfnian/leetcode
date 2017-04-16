#include<stdio.h>
#include<stdbool.h>
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n)
{
	int left = 0, right = n - 1;
	int mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (isBadVersion(mid))
			right = mid - 1;
		else
			left = mid + 1;
	}

	return left;
}

bool isBadVersion(int version)
{
	return false;
}
