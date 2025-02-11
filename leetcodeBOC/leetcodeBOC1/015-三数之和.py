class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = set()
        nums.sort()
        for i in range(len(nums)):
            target = -nums[i]
            d = dict()
            for j in range(i+1, len(nums)):
                if i != j and target-nums[j] in d:
                    # if [-target, target-nums[j], nums[j]]not in res:
                    res.add(str([-target, target-nums[j], nums[j]]))

                d[nums[j]] = j
        return list(map(eval, list(res)))

# class Solution(object):
#     def twoSum(self, nums, target):
#         """
#         :type nums: List[int]
#         :type target: int
#         :rtype: List[int]
#         """
#         d = dict()
#         for i in range(len(nums)):
#             if target-nums[i] in d:
#                 return [i, d[target-nums[i]]]
#             d[nums[i]] = i


# print(Solution().twoSum([2, 7, 11, 15], 9))
print(Solution().threeSum([-1, 0, 1, 2, -1, -4]))
