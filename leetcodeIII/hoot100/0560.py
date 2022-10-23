class Solution_trace(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        res = [0]

        def trace(nums, path, start_index, target):
            if path and sum(k for k, _ in path) == target:
                res[0] += 1
            for i in range(start_index, len(nums)):
                if len(path) == 0 or i - path[-1][1] == 1:  # 控制连续
                    path.append((nums[i], i))
                    trace(nums, path, i + 1, target)
                    path.pop()

        trace(nums, [], 0, k)
        return res[0]


class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        d = {0: 1}
        pre = 0
        res = 0
        for i in range(len(nums)):
            pre += nums[i]
            if pre - k in d:
                res += d[pre - k]
            if pre in d:
                d[pre] += 1
            else:
                d[pre] = 1
        return res


# print(Solution().subarraySum([1, 1, 1], 2))
print(Solution().subarraySum([1, -1, 1, -1], 0))
