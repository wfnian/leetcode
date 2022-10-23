class Solution1(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []

        def trace(nums, path, idxs):
            if len(path) == len(nums):
                if path not in res:
                    res.append(path[:])
                return
            for index, e in enumerate(nums):
                if index in idxs:
                    continue
                # if (index > 0 and nums[index] == nums[index - 1]):
                #     continue
                idxs.append(index)
                path.append(nums[index])
                trace(nums, path, idxs)
                path.pop()
                idxs.pop()

        pos = len(nums) * [False]
        trace((nums), [], [])
        return res
        # res = []

        # def trace(nums, path, idx, pos):
        #     if len(path) == len(nums):
        #         res.append(path[:])
        #         return
        #     for i in range(idx, len(nums)):
        #         if i > idx and nums[i] == nums[i - 1] and pos[i] == True:
        #             continue
        #         pos[i] = True
        #         path.append(nums[i])
        #         trace(nums, path, i, pos)
        #         pos[i] = False
        #         path.pop()

        # pos = len(nums) * [False]
        # trace(sorted(nums), [], 0, pos)
        # return res


class Solution(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ans = []
        # nums.sort()
        n = len(nums)

        def dfs(tmp, used):
            if len(tmp) == len(nums):
                ans.append(tmp[:])
                return
            for i in range(n):
                if not used[i]:
                    # if i > 0 and nums[i] == nums[i - 1] and used[i - 1]:
                    #     continue
                    used[i] = True
                    tmp.append(nums[i])
                    dfs(tmp, used)
                    used[i] = False
                    tmp.pop()

        dfs([], [False] * n)
        return ans


print(Solution().permuteUnique([1, 1, 2]))
